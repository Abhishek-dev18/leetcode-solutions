# Write your MySQL query statement below
select p.firstName,p.lastName,a.city,a.state
from Person P
Left JOIN Address a
on p.personId=a.personId 