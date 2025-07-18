# Write your MySQL query statement below
SELECT w2.id AS Id
FROM Weather w1
INNER JOIN Weather w2
WHERE DATEDIFF(w2.recordDate,w1.recordDate)=1
AND w2.temperature > w1.temperature
GROUP BY w2.id
