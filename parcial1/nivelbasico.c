#include <stdio.h>
#define MAX 100

int arreglo[MAX];
int n = 0;
int datosIngresados = 0;

// funciones
void registrar();
void mostrar();
void burbuja();
void seleccion();
void insercion();

int main() {

    int opcion;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Registrar datos\n");
        printf("2. Mostrar arreglo\n");
        printf("3. Ordenar por Burbuja\n");
        printf("4. Ordenar por Seleccion\n");
        printf("5. Ordenar por Insercion\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                registrar(); // aquí ingreso los datos al arreglo
                datosIngresados = 1;
                break;

            case 2:
                if(datosIngresados == 0){
                    printf("Primero debes ingresar datos\n");
                } else {
                    mostrar(); // muestro el arreglo tal como está
                }
                break;

            case 3:
                if(datosIngresados == 0){
                    printf("Primero debes ingresar datos\n");
                } else {
                    burbuja(); // ordeno usando burbuja
                }
                break;

            case 4:
                if(datosIngresados == 0){
                    printf("Primero debes ingresar datos\n");
                } else {
                    seleccion(); // ordeno usando selección
                }
                break;

            case 5:
                if(datosIngresados == 0){
                    printf("Primero debes ingresar datos\n");
                } else {
                    insercion(); // ordeno usando inserción
                }
                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while(opcion != 6);

    return 0;
}

// pido los datos al usuario
void registrar(){
    printf("Cuantos datos desea ingresar?: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Dato %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }
}

// imprimo el arreglo
void mostrar(){
    for(int i = 0; i < n; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

// metodo burbuja
void burbuja(){
    int temp;

    for(int i = 0; i < n-1; i++){
        printf("\n--- Paso %d ---\n", i+1);

        for(int j = 0; j < n-1-i; j++){

            printf("Comparando %d con %d\n", arreglo[j], arreglo[j+1]);

            if(arreglo[j] > arreglo[j+1]){
                // intercambio los valores si están desordenados
                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;

                printf("Se intercambian\n");
                mostrar();
            }
        }

        printf("Resultado del paso %d: ", i+1);
        mostrar();
    }
}

// metodo seleccion
void seleccion(){
    int temp;

    for(int i = 0; i < n-1; i++){
        int min = i;

        printf("\n--- Paso %d ---\n", i+1);

        for(int j = i+1; j < n; j++){
            printf("Comparando %d con %d\n", arreglo[min], arreglo[j]);

            if(arreglo[j] < arreglo[min]){
                min = j; // guardo la posición del menor
                printf("Nuevo menor: %d\n", arreglo[min]);
            }
        }

        // intercambio el menor con la posición actual
        temp = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = temp;

        printf("Arreglo despues del intercambio: ");
        mostrar();
    }
}

// metodo insercion
void insercion(){
    for(int i = 1; i < n; i++){

        int clave = arreglo[i]; // número que voy a ubicar
        int j = i - 1;

        printf("\n--- Paso %d ---\n", i);
        printf("Insertando %d\n", clave);

        // muevo los números mayores hacia la derecha
        while(j >= 0 && arreglo[j] > clave){
            printf("Moviendo %d a la derecha\n", arreglo[j]);

            arreglo[j+1] = arreglo[j];
            j--;
        }

        // coloco el número en su posición correcta
        arreglo[j+1] = clave;

        printf("Arreglo despues de insertar: ");
        mostrar();
    }
}