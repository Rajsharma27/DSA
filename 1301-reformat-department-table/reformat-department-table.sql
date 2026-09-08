# Write your MySQL query statement below
select
id,
sum(case When month = 'Jan' then revenue end) as jan_revenue,
sum(case When month = 'feb' then revenue end) as feb_revenue,
sum(case When month = 'mar' then revenue end) as mar_revenue,
sum(case When month = 'apr' then revenue end) as apr_revenue,
sum(case When month = 'may' then revenue end) as may_revenue,
sum(case When month = 'jun' then revenue end) as jun_revenue,
sum(case When month = 'jul' then revenue end) as jul_revenue,
sum(case When month = 'aug' then revenue end) as aug_revenue,
sum(case When month = 'sep' then revenue end) as sep_revenue,
sum(case When month = 'oct' then revenue end) as oct_revenue,
sum(case When month = 'nov' then revenue end) as nov_revenue,
sum(case When month = 'dec' then revenue end) as dec_revenue
from department
group by id