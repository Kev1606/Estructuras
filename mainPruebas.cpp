/*
    Programa principal que permite hacer las pruebas de los 3 ejercicios: crear un 
arreglo de varios elementos y que se demuestre que efectivamente lo ordena, que se pruebe que 
funcionan bien las funciones de la lista y lo mismo que dicha lista quede efectivamente bien 
ordenada
*/
#include <iostream>
#include <stdio.h>
//#include "player.h"
//#include "playersList.h"
#include "selectionSort.h"
//#include "insertionSort.h"

int main() {
    int arraySize = 5;
    float array[arraySize] = {3,8,5,9,1};
    selectionSort(arraySize,array);
}