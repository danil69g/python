select last_name as Прізвище, city as Місто/*, match_1 as Математика, informatics as Інформатика*/
from studs1
where city = "Житомир"; 
 select last_name as Прізвище, city as Місто, match_1 as Математика, informatics as Інформатика
from studs1
where match_1 = 6 or informatics = 8;
select last_name as Прізвище, city as Місто, match_1 as Математика, informatics as Інформатика
from studs1
where informatics > 8;
select last_name as Прізвище, group_1 as Група
from studs1
where last_name like "П%";
select last_name as Прізвище, group_1 as Група
from studs1
where group_1 like "%2%";
select last_name as Прізвище
from studs1
where last_name like "%в%";
select last_name as Прізвище
from studs1
where last_name like "С%";
