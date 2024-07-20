create database collage1;
use collage1;
create table studs1 (
st_id int primary key,
last_name varchar (30),
first_name varchar (30),
city varchar (30),
street varchar (30),
house integer,
group_1 varchar (15),
match_1 integer,
ukr_language integer,
informatics integer,
data_of_birth integer
);
select * from studs1;
insert into studs1 values (1, "Пономаренко", "Олексій", "Житомир", "Івана Мазепи", 3, "П-24", 6, 7, 5, 8);
insert into studs1 values (2, "Крайнов", "Олександр", "Житомир", "Першого травня", 12, "Ел-21", 9, 12, 4, 3);
insert into studs1 values (3, "Сабітов", "Андрій", "Житомир", "Київська", 51, "С-25", 10, 10, 8, 11);
insert into studs1 values (4, "Прохоренко", "Денис", "Житомир", "Івана Франка", 10, "Лг-12", 7, 8, 10, 6);
insert into studs1 values (5, "Голубєв", "Данило", "Житомир", "Небесної сотні", 37, "П-14", 6, 8, 9, 10);
insert into studs1 values (6, "Свірський", "Віталій", "Житомир", "Гоголівська", 15, "П-24", 9, 5, 8, 1);
insert into studs1 values (7, "Гетман", "Максим", "Київ", "Хлібна", 33, "П-14", 9, 4, 2, 8);
insert into studs1 values (8, "Войтенко", "Максим", "Житомир", "Святослава Ріхтера", 45, "П-24", 4, 9, 8, 5);
insert into studs1 values (9, "Вакуленко", "Ілля", "Житомир", "Оболонська", 34, "П-34", 4, 6, 8, 9);
insert into studs1 values (10, "Стретович", "Владислав", "Житомир", "Миру", 99, "К-37", 4, 9, 8, 6);
