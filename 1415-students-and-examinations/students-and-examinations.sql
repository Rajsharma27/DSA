# Write your MySQL query statement below
select s.student_id, s.student_name, su.subject_name,
count(ex.student_id) attended_exams
from students s
cross join subjects su
LEFT JOIN Examinations ex
    ON s.student_id = ex.student_id
    AND su.subject_name = ex.subject_name
GROUP BY S.student_id, S.student_name, SU.subject_name
ORDER BY S.student_id, S.student_name, SU.subject_name