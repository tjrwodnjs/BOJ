with recursive gen as (
    select 
        id,
        parent_id,
        1 as level
    from ecoli_data
    where parent_id is null
    
    union
    
    select
        a.id, 
        a.parent_id,
        b.level + 1 as level
    from ecoli_data a
    inner join gen b on a.parent_id = b.id
)

select count(id) as count, level as generation
from gen
where id not in (select parent_id from ecoli_data where parent_id is not null)
group by level