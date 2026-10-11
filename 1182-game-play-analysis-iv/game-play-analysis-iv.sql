# Write your MySQL query statement below
select round(count(distinct player_id) / (select count(distinct player_id)
from activity),2) as fraction
from activity
Where (player_id,event_date) in
(
    SELECT player_id, DATE_ADD(MIN(event_date), INTERVAL 1 DAY)
    FROM Activity
    GROUP BY player_id
)