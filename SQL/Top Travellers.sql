select 
    U.name,
    COALESCE(SUM(R.distance), 0) AS travelled_distance
from Users U
left join Rides R
    on U.id=R.user_id
group by U.id,U.name
order by travelled_distance desc,name asc