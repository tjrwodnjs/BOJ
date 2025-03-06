-- 코드를 입력하세요
SELECT 
    year(s.sales_date) as YEAR,
    month(s.sales_date) as MONTH,
    count(distinct s.user_id) as PURCHASED_USERS,
    round(count(distinct s.user_id) / (select count(distinct user_id) from user_info where year(joined) = 2021), 1) as PUCHASED_RATIO
from online_sale as s
inner join user_info as u on s.user_id = u.user_id
where year(u.joined) = 2021
group by year, month
order by year, month