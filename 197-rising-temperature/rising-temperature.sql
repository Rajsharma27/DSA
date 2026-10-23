# Write your MySQL query statement below
select W.id
from Weather W
inner join Weather W2
Where W.temperature > W2.temperature and datediff(W.recordDate,W2.recordDate)=1