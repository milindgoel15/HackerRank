/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE NOT RIGHT(CITY, 1) IN ('a', 'e', 'i', 'o', 'u')