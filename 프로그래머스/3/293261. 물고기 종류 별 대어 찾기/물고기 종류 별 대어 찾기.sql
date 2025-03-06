select id, n.fish_name, length from fish_info i
inner join fish_name_info n on i.fish_type = n.fish_type
where length = (select max(length)
                from fish_info
                where i.fish_type = fish_type
               )
order by id