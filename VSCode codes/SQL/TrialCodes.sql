
-- CREATE TABLE Trial
-- (
--     id INT NOT NULL PRIMARY KEY, -- primary key column
--     username varchar(50) NOT NULL,
--     age INT NOT NULL,
--     register_time DATETIME DEFAULT CURRENT_TIMESTAMP
--     -- specify more columns here
-- );
-- GO

-- Insert rows into table 'Trial'
-- INSERT INTO Trial(
--     id,username,age,roll_no
-- )
-- VALUES
-- ( -- first row: values for the columns in the list above
--  82,'Ricky Chaudhary',20,'21bcs082'
-- )
-- add more rows here
-- GO

-- ALTER TABLE Trial
-- ADD verified BIT DEFAULT 1

-- ALTER TABLE Trial
-- DROP COLUMN date_modified

-- UPDATE Trial 
-- SET verified = 1 , phone = 7876212938
-- WHERE id = 90

-- DELETE FROM Trial
-- WHERE id = 81

-- use dbms
-- COMMIT


-- ROLLBACK

-- BEGIN TRANSACTION init

-- DELETE FROM Trial
-- WHERE id = 82

-- ROLLBACK                                                                 

-- SELECT * FROM Trial
-- DESC Trial


-- DDL and DML Commands 
-- on table Student

-- CREATE TABLE Student   
-- (  
--     roll_no INT PRIMARY KEY,
--     first_name VARCHAR(20) NOT NULL,    
--     last_name VARCHAR(20),
--     email VARCHAR(20) UNIQUE,
--     age INT
-- );

-- INSERT INTO Student
-- VALUES
-- (
--  90,'Aryan','Prasher','aryan1421g@gmail.com',18
-- )

-- ALTER TABLE Student
-- ADD batch INTEGER DEFAULT 2021

-- TRUNCATE TABLE Student

-- INSERT INTO Student
-- VALUES
-- (
--  90,'Aryan','Prasher','aryan1421g@gmail.com',18,2021
-- )

-- UPDATE Student
-- SET batch = 2025
-- WHERE roll_no = 90

-- INSERT INTO Student
-- (roll_no,first_name)
-- VALUES
-- (
--  79,'NULL'
-- )

-- DELETE FROM Student
-- WHERE roll_no = 81




-- SELECT COUNT(DISTINCT age) as distinct_age FROM Student

-- SELECT SUM(age) as sum_age FROM Student

-- SELECT AVG(age) as avg_age FROM Student

-- SELECT MIN(age) AS min_age,
--        MAX(age) AS max_age
-- FROM Student


-- SELECT COUNT(*) as batch2025_count, batch
-- FROM Student
-- GROUP BY batch;

-- SELECT * FROM Student



-- Joins


-- Create the Enrollments table
-- CREATE TABLE E1
-- (
--     enrollment_id INT PRIMARY KEY,
--     student_id INT,
--     course_name VARCHAR(50),
--     FOREIGN KEY (student_id) REFERENCES Student(roll_no)
-- );


-- Insert sample data into Enrollments
-- INSERT INTO E1
--     (enrollment_id, student_id, course_name)
-- VALUES
--     (1, 81, 'Mathematics'),
--     (2, 82, 'History'),
--     (3, 90, 'Science');

-- Perform a Equi Join
-- SELECT *
-- FROM Student, E1
-- WHERE student_id = roll_no



-- Perform an Inner Join
-- SELECT *                                                                                      
--     INNER JOIN E1 ON Student.roll_no = E1.student_id;


-- Perform a Left Outer Join
-- SELECT *
-- FROM Student
--     LEFT OUTER JOIN E1 ON Student.roll_no = E1.student_id;

-- SELECT *
-- FROM E1;
-- SELECT *
-- FROM Student;

-- CLAUSES

-- SELECT  COUNT(*)  
-- FROM Student   
-- GROUP BY batch;


-- VIEWS IN SQL

-- use dbms

-- CREATE VIEW StudentNamesView
-- AS
--     SELECT first_name, last_name, email
--     FROM Student;



-- UPDATE Student
-- SET email = '1325753@google.com'
-- WHERE roll_no = 90;


-- Query the StudentNamesView

-- SELECT *
-- FROM StudentNamesView;

-- SELECT * 
-- FROM Student;

-- SELECT * FROM Student
-- WHERE age> (SELECT AVG(age) FROM Student)

-- DROP VIEW StudentNamesView;





-- GRANT AND REVOKE

-- CREATE USER user1;

-- GRANT SELECT ON Student TO user1;

-- REVOKE SELECT ON Student FROM user1;


-- BEGIN TRANSACTION;
-- UPDATE Student
-- SET email = 'newemail@example.com'
-- WHERE roll_no = 90;

-- Check the results and decide whether to commit or rollback
-- If you are satisfied with the changes, commit the transaction
-- COMMIT;
-- If not satisfied or any issues occur, rollback the transaction
-- ROLLBACK;


-- SELECT * 
-- FROM Student;















-- use dbms;

-- CREATE TABLE Product   
-- (  
--     ProductID INT PRIMARY KEY,
--     ProductName VARCHAR(20),    
--     UnitPrice INT
-- );

-- CREATE TABLE Orders   
-- (  
--     OrderID INT PRIMARY KEY,
--     ProductID INT,
--     CustomerName VARCHAR(20),
--     OrderDate DATE,
--     Quantity INT,
--     FOREIGN KEY (ProductID) REFERENCES Product(ProductID)
-- );

-- INSERT INTO Product
-- VALUES(1,'Laptop',50000);

-- INSERT INTO Product
-- VALUES(2,'Mobile',20000);

-- INSERT INTO Product
-- VALUES(3,'Tablet',10000);

-- INSERT INTO Orders
-- VALUES(1,1,'Aryan','2021-09-01',2);

-- INSERT INTO Orders
-- VALUES(2,2,'Ricky','2021-09-02',1);

-- INSERT INTO Orders
-- VALUES(3,3,'Someone','2021-09-03',3);

SELECT * FROM Product;
SELECT * FROM Orders;

-- -- 2)
-- -- sales for each product

SELECT ProductName, SUM(Quantity*UnitPrice) AS TotalSales
FROM Product
    INNER JOIN Orders ON Product.ProductID = Orders.ProductID
GROUP BY ProductName;

-- -- 3)
-- -- list of orders along with product details using INNER JOIN

SELECT * FROM Product
    INNER JOIN Orders ON Product.ProductID = Orders.ProductID;


-- -- 4)
-- -- firstly adding a product without any sales
-- INSERT INTO Product
-- VALUES(4,'Headphones',1000);

-- -- find all products using left join even those without sales

SELECT * FROM Product
    LEFT JOIN Orders ON Product.ProductID = Orders.ProductID;


-- -- 5)
-- -- find the customer who made the highest purchase

SELECT *
FROM
    (SELECT CustomerName, SUM(Quantity*UnitPrice) AS TotalSales
    FROM Product
        INNER JOIN Orders ON Product.ProductID = Orders.ProductID
    GROUP BY CustomerName) AS Sales
WHERE TotalSales = (SELECT MAX(TotalSales) FROM Sales);



-- employeemanagement
-- CREATE DATABASE EmployeeManagement;

-- use EmployeeManagement;

-- CREATE TABLE Employee
-- (
--     EmployeeID INT PRIMARY KEY,
--     FirstName VARCHAR(20),
--     LastName VARCHAR(20),
--     Position VARCHAR(20),
--     Salary INT
-- );

-- INSERT INTO Employee
-- VALUES(1,'Aryan','Prasher','Intern',20000);

-- INSERT INTO Employee
-- VALUES(2,'Ricky','Chaudhary','Intern',20000);

-- INSERT INTO Employee
-- VALUES(3,'A','B','FTE',30000);

-- INSERT INTO Employee
-- VALUES(4,'X','Y','FTE',40000);

-- INSERT INTO Employee
-- VALUES(5,'Q','R','FTE',50000);


-- UPDATE Employee
-- SET salary = 65000
-- WHERE EmployeeID = 5;

-- DELETE FROM Employee
-- WHERE EmployeeID = 4;

-- SELECT * FROM Employee 
-- WHERE salary > 50000;

-- SELECT * FROM Employee;