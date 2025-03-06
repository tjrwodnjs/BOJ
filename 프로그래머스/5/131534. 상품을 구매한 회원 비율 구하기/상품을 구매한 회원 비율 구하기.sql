-- 코드를 입력하세요
SELECT 
    year(s.sales_date) as year,
    month(s.sales_date) as month,
    user_id
from online_sale as s