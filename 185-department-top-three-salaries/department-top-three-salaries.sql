# Write your MySQL query statement below
select d.name as department, e.name as employee, e.salary as salary
from employee e join department d on e.departmentId = d.Id
where 3 > (
    select count(distinct e1.salary)
    from employee e1
    where e1.departmentId = e.departmentId
    and e1.salary > e.salary
)