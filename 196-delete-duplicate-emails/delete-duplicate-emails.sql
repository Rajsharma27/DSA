# Write your MySQL query statement below
delete t from person t, person q
where t.email = q.email and t.id > q.id