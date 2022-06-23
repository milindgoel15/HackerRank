/*
Enter your query here.
P1(A,C) & P2(B,D) = SQRT((A - B)2 + (C - D)2) 
*/

SELECT ROUND(SQRT(POWER(MIN(LAT_N) - MAX(LAT_N), 2) + POWER(MIN(LONG_W) - MAX(LONG_W), 2)), 4) FROM STATION