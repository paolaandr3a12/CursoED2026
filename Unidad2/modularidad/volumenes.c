#include "volumenes.h"
#include <math.h>

// funcion para calcular el volumen de una esfera
float volumenEsfera(float radio){
    return (4.0/3.0) * 3.1416 * radio * radio * radio;
}

// funcion para calcular el volumen de un cubo
float volumenCubo(float lado){
    return lado * lado * lado;
} 