# Write your MySQL query statement below
update salary
set sex = case
When sex = 'm' then 'f'
When sex = 'f' then 'm'
else sex
end