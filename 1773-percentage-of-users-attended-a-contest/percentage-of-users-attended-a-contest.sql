SELECT r.contest_id, IFNULL(ROUND((COUNT(r.user_id)/(select count(*) from users))*100,2),0) AS percentage
FROM Register r
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id