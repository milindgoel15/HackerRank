/*
Enter your query here.
MANHATTAN FORMULA = | a - c| + | b - d|
*/
SELECT ROUND(ABS((MIN(LAT_N) - MAX(LONG_W)) + (MIN(LONG_W) - MAX(LAT_N))), 4) FROM STATION