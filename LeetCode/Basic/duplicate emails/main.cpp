select distinct e.email from  Person e inner join 
   (select * from Person group by email HAVING COUNT(id) > 1) d ON e.email = d.email