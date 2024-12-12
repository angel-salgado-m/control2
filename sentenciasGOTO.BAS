REM if-else
SUB ifElse
    DIM a AS INTEGER
    DIM b AS INTEGER

    PRINT "Ingrese un valor para a: "
    INPUT a
    PRINT "Ingrese un valor para b: "
    INPUT b

    IF a > b THEN GOTO aMayorB
    IF a < b THEN GOTO aMenorB
    IF a = b THEN GOTO aIgualB

aMayorB:
    PRINT "a es mayor que b"
    GOTO fin

aMenorB:
    PRINT "a es menor que b"
    GOTO fin

aIgualB:
    PRINT "a es igual a b"
    GOTO fin

fin:
    PRINT "Fin de la sentencia if-else."
END SUB

REM if-else anidados
SUB ifElseNested
    DIM prom AS SINGLE
    DIM nota AS SINGLE

    PRINT "Ingrese el promedio de las notas: "
    INPUT prom
    PRINT "Ingrese la nota: "
    INPUT nota

    IF nota < prom THEN GOTO notaMenor
    IF nota > prom THEN GOTO notaMayor

notaMenor:
    PRINT "La nota es menor al promedio."
    IF nota < 4 THEN GOTO notaRojo
    IF nota >= 4 THEN GOTO notaAzul

notaMayor:
    PRINT "La nota es mayor al promedio."
    IF nota < 4 THEN GOTO notaRojo
    IF nota >= 4 THEN GOTO notaAzul

notaRojo:
    PRINT "Además, la nota es un rojo."
    GOTO fin

notaAzul:
    PRINT "Además, la nota es un azul."
    GOTO fin

fin:
    PRINT "Fin de la sentencia if-else anidada."
END SUB

REM switch-case
SUB switchCase
    DIM opcion AS INTEGER

    PRINT "Ingrese su opcion: (1-5)"
    INPUT opcion

    IF opcion < 1 THEN GOTO opcionInvalida
    IF opcion = 1 THEN GOTO opcion1
    IF opcion = 2 THEN GOTO opcion2
    IF opcion = 3 THEN GOTO opcion3
    IF opcion = 4 THEN GOTO opcion4
    IF opcion = 5 THEN GOTO opcion5
    IF opcion > 5 THEN GOTO opcionInvalida

opcion1:
    PRINT "Opcion 1 seleccionada."
    GOTO fin

opcion2:
    PRINT "Opcion 2 seleccionada."
    GOTO fin

opcion3:
    PRINT "Opcion 3 seleccionada."
    GOTO fin

opcion4:
    PRINT "Opcion 4 seleccionada."
    GOTO fin

opcion5:
    PRINT "Opcion 5 seleccionada."
    GOTO fin

opcionInvalida:
    PRINT "Opcion invalida."
    GOTO fin

fin:
    PRINT "Fin de la sentencia switch-case."
END SUB

REM while-loop
SUB whileLoop
    DIM i AS INTEGER
    DIM max AS INTEGER
    max = 100

    PRINT "Ingrese número a duplicar: "
    INPUT i

inicio:
    IF i > max THEN GOTO fin
    PRINT "Número actual: "; i
    i = i * 2
    GOTO inicio

fin:
    PRINT "Fin de la sentencia while."
END SUB

REM for-loop
SUB forLoop
    DIM i AS INTEGER
    DIM j AS INTEGER
    DIM iter AS INTEGER
    iter = 10

    PRINT "Ingrese número a aumentar: "
    INPUT i

inicio:
    IF j = iter THEN GOTO fin
    i = i + 1
    PRINT "Número actual: "; i
    j = j + 1
    GOTO inicio

fin:
    PRINT "Fin de la sentencia for."
END SUB

REM do-while
SUB doWhile
    DIM i AS INTEGER

inicio:
    PRINT "Ingrese un número entero positivo: "
    INPUT i
    IF i <= 0 THEN GOTO inicio

    PRINT "Número válido: "; i
END SUB

REM break-statement
SUB breakStatement
    DIM i AS INTEGER
    DIM j AS INTEGER
    DIM k AS INTEGER
    DIM iter AS INTEGER
    iter = 10

    PRINT "Ingrese número a aumentar: "
    INPUT i
    PRINT "Ingrese número objetivo: "
    INPUT k

inicio:
    IF j = iter THEN GOTO fin
    IF i = k THEN GOTO fin
    i = i + 1
    PRINT "Número actual: "; i
    j = j + 1
    GOTO inicio

fin:
    PRINT "Fin de la sentencia for con break."
END SUB

REM continue-statement
SUB continueStatement
    DIM i AS INTEGER
    DIM j AS INTEGER
    DIM iter AS INTEGER
    iter = 10

    PRINT "Ingrese número a aumentar: "
    INPUT i

inicio:
    IF j = iter THEN GOTO fin
    IF i MOD 2 = 0 THEN GOTO avanzar

    PRINT "Número actual: "; i
    GOTO avanzar

avanzar:
    i = i + 1
    j = j + 1
    GOTO inicio

fin:
    PRINT "Fin de la sentencia for con continue."
END SUB

SUB Main
    ifElse
    REM CALL ifElseNested
    REM CALL switchCase
    REM CALL whileLoop
    REM CALL forLoop
    REM CALL doWhile
    REM CALL breakStatement
    REM CALL continueStatement
END SUB

Main
