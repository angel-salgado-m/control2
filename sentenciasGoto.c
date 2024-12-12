//(if-else, if-else anidados, switch, while, for, do-while, break y continue) utilizando sentencias GOTO
#include <stdio.h>

void ifElse(){

    /*  if-else
        Verifica igualdad o desigualdad entre a y b, en cualquier caso se redirige a las etiquetas correspondientes.
    */

    int a = 0;
    int b = 0;

    printf("Ingrese un valor para a: ");
    scanf("%d", &a);
    printf("Ingrese un valor para b: ");
    scanf("%d", &b);

    if(a > b){
        goto aMayorB;
    }

    if(a < b){
        goto aMenorB;
    }

    if(a == b){
        goto aIgualB;
    }

    aMayorB:
        printf("a es mayor que b\n");
        goto fin;
    
    aMenorB:
        printf("a es menor que b\n");
        goto fin;
    
    aIgualB:
        printf("a es igual a b\n");
        goto fin;

    fin:
        printf("Fin de la sentencia if-else.\n");
    

};

void ifElseNested(){

    /*  if-else anidados
        Verifica si una calificacion esta sobre o bajo el promedio, y si es un "rojo" o un "azul".
    */

    float prom = 0;
    float nota = 0;

    printf("Ingrese el promedio de las notas: ");
    scanf("%f", &prom);
    printf("Ingrese la nota: ");
    scanf("%f", &nota);

    // if-else exterior
    if(nota < prom){
        goto notaMenor;
    }

    if(nota > prom){
        goto notaMayor;
    }

    // notaMenor y notaMayor son los resultados de los if-else exteriores, dentro de estos se hace otro chequeo aparte
    notaMenor:
        printf("La nota es menor al promedio.\n");
        if(nota < 4){
            goto notaRojo;
        }
        if(nota >= 4){
            goto notaAzul;
        }

    notaMayor:
        printf("La nota es mayor al promedio.\n");
        if(nota < 4){
            goto notaRojo;
        }
        if(nota >= 4){
            goto notaAzul;
        }

    // notaRojo y notaAzul son los resultados de los if-else interiores
    notaRojo:
        printf("Ademas, la nota es un rojo.\n");
        goto fin;

    notaAzul:
        printf("Ademas, la nota es un azul.\n");
        goto fin;
    
    fin:
        printf("Fin de la sentencia if-else anidada.\n");

};

void switchCase(){

    /*  switch-case
        Verifica la opcion escogida en un "menú". 
    */

    int opcion = 0;

    printf("Ingrese su opcion:\n 1. Opcion 1\n 2. Opcion 2\n 3. Opcion 3\n 4. Opcion 4\n 5. Opcion 5\n");
    scanf("%d", &opcion);

    if(opcion < 1){
        goto opcionInvalida;
    };
    if(opcion == 1){
        goto opcion1;
    };
    if(opcion == 2){
        goto opcion2;
    };
    if(opcion == 3){
        goto opcion3;
    };
    if(opcion == 4){
        goto opcion4;
    };
    if(opcion == 5){
        goto opcion5;
    };
    if(opcion > 5){
        goto opcionInvalida;
    };
    
    opcion1:
        printf("Opcion 1 seleccionada.\n");
        goto fin;
    
    opcion2:
        printf("Opcion 2 seleccionada.\n");
        goto fin;
    
    opcion3:
        printf("Opcion 3 seleccionada.\n");
        goto fin;
    
    opcion4:
        printf("Opcion 4 seleccionada.\n");
        goto fin;

    opcion5:
        printf("Opcion 5 seleccionada.\n");
        goto fin;

    opcionInvalida:
        printf("Opcion invalida.\n");
        goto fin;

    fin:
        printf("Fin de la sentencia switch-case.\n");

};

void whileLoop(){

    /*  while
        Duplica los numeros. Con un numero maximo de 100.
    */

    int i = 0;
    int max = 100;

    printf("Ingrese numero a duplicar: ");
    scanf("%d", &i);

    inicio:

        if(i > max){
            goto fin;
        }
    
    operacion:
        printf("Numero actual: %d\n", i);
        i = i * 2;
        goto inicio;

    fin:
        printf("Fin de la sentencia while.\n");

};

void forLoop(){

    /*  while
        Aumenta el numero dado por una unidad 10 veces.
    */

    int i = 0;
    int j = 0;
    int iter = 10;

    printf("Ingrese numero a aumentar: ");
    scanf("%d", &i);

    inicio:

        if(j == iter){
            goto fin;
        }

        i = i + 1;
        printf("Numero actual: %d\n", i);

        j = j + 1;

        goto inicio;

    fin:
        printf("Fin de la sentencia for.\n");

};

void doWhile(){

    /*  do-while
        Verifica si el numero ingresado es positivo, si no lo es, repite el ciclo.
    */

    int i = 0;

    inicio:
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &i);

        if(i <= 0){
            goto inicio;  // Si el número no es positivo, repite el ciclo.
        }

    printf("Número válido: %d\n", i);
 

};

void breakStatement(){

    /*  break
        Termina el ciclo for (de 10 iteraciones) cuando el numero aumentado es igual al objetivo.
    */

    int i = 0;
    int j = 0;
    int k = 0;

    printf("Ingrese numero a aumentar: ");
    scanf("%d", &i);
    printf("Ingrese numero objetivo: ");
    scanf("%d", &k);

    int iter = 10;

    inicio:

        if(j == iter){
            goto fin;
        }

        if(i == k){
            goto fin;
        }

        i = i + 1;
        printf("Numero actual: %d\n", i);

        j = j + 1;

        goto inicio;

    fin:
        printf("Fin de la sentencia for con break.\n");

};

void continueStatement() {

    /*  continue
        Salta la iteración actual si el número es par.
    */

    int i = 0;
    int j = 0;

    printf("Ingrese número a aumentar: ");
    scanf("%d", &i);

    int iter = 10;

    inicio:
        if(j == iter){
            goto fin;  // Condición para salir del bucle
        };

        if(i % 2 == 0){
            goto avanzar;
        };

    imprimir:
        printf("Número actual: %d\n", i);
        goto avanzar;

    avanzar:
        i = i + 1;  // Incremento del número
        j = j + 1;  // Incremento del contador de iteraciones
        goto inicio;

    fin:
        printf("Fin de la sentencia for con continue.\n");
};

int main(){

    // ifElse();

    // ifElseNested();

    // switchCase();

    // whileLoop();

    // forLoop();

    // doWhile();

    // breakStatement();

    // continueStatement();

    return 0;

};