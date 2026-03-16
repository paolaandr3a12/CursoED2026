#include <stdio.h>
#include "areas.h"
#include "volumenes.h"

int main(){

    int opcion = 0;      // variable para guardar la opcion del usuario
    float radio;     // para el radio del circulo o esfera
    float lado;      // para el lado del cuadrado o cubo

    while (opcion !=5){
    // menu principal
    printf("  CALCULADORA GEOMETRICA  \n");
    printf("1. Area del circulo\n");
    printf("2. Area del cuadrado\n");
    printf("3. Volumen de la esfera\n");
    printf("4. Volumen del cubo\n");
    printf("5. Salir\n");

    // pedir opcion
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    // dependiendo de la opcion se hace el calculo
    switch(opcion){

        case 1:
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            printf("Area del circulo: %.2f\n", areaCirculo(radio));
            break;

        case 2:
            printf("Ingrese el lado: ");
            scanf("%f", &lado);
            printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
            break;

        case 3:
            printf("Ingrese el radio: ");
            scanf("%f", &radio);
            printf("Volumen de la esfera: %.2f\n", volumenEsfera(radio));
            break;

        case 4:
            printf("Ingrese el lado: ");
            scanf("%f", &lado);
            printf("Volumen del cubo: %.2f\n", volumenCubo(lado));
            break;

        case 5:
            printf("Saliendo del programa...\n");
            break;

        default:
            printf("Opcion no valida\n");
    }
    }
    return 0;
}