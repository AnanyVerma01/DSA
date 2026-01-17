select query_name, round(SUM(rating/position)/count(*),2) as quality,
Round(sum(if(rating<3,1,0))/count(*)*100,2) as poor_query_percentage
from Queries 
group by query_name
order by poor_query_percentage