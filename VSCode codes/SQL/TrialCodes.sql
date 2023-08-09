
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
--  81,'Tanvi Bhopal',20,'21bcs081'
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

SELECT * FROM Trial
-- DESC Trial