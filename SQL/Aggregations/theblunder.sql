/*
Enter your query here.
*/

SELECT CEIL(AVG(salary) - AVG(REPLACE(salary, 0, ''))) FROM EMPLOYEES; -- using ceil as round doesnt function on 0 decimal values