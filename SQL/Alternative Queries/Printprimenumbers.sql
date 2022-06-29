/*
Works in oracle
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SET SERVEROUTPUT ON;
DECLARE
    COUNTER NUMBER;
    K NUMBER;
    OUTPUT CLOB;
BEGIN
    FOR n IN 2 .. 1000 LOOP
        COUNTER := 0;
        K := floor(n/2);
        
        FOR i IN 2 .. K LOOP
            IF (mod(n,i) = 0) THEN
                COUNTER := 1;
            END IF;
        END LOOP;
        
        IF COUNTER = 0 THEN
            OUTPUT := OUTPUT || n || '&';
        END IF;
    END LOOP;
    
    DBMS_OUTPUT.PUT_LINE(SUBSTR(OUTPUT, 1, LENGTH(OUTPUT) - 1)); -- For replacing the extra string in the output
END;
/