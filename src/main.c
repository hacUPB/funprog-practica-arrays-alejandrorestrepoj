#include <stdio.h>
#include "exercises.h"

int main(void)
{
    /*Implementa aquí el código necesario para probar que las funciones realizan
    la tarea correctamente.*/
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1}; 
    int n1 = 5;
    int n2 = 5;
    int sum;
    float average;
    printf("Arreglo 1: {1, 2, 3, 4, 5}\n");
    printf("Arreglo 2: {5, 4, 3, 2, 1}\n\n");
    printf("Suma de Arreglo 1: %d\n", calcSum(arr1, n1));
    printf("Maximo del Arreglo 1: %d\n", findMax(arr1, n1));
    printf("Promedio del Arreglo 1: %.2f\n", calcAverage(arr1, n1));
    printf("Numeros pares en el Arreglo 1: %d\n", countEvens(arr1, n1));
    printf("Suma del primer y ultimo elemento del Arreglo 1: %d\n", sumFirstLast(arr1, n1));
    printf("Minimo del Arreglo 1: %d\n", findMin(arr1, n1));
    printf("Suma de las diferencias del Arreglo 1 y Arreglo 2: %d\n", subtractArraysSum(arr1, arr2, n1));
    printf("Suma del Arreglo resultante: %d\n", mergeArraysSum(arr1, n1, arr2, n2));
    printf("Producto del Arreglo 1: %d\n", productArray(arr1, n1));
    calcSumAverage(arr1, n1, &sum, &average);
    printf("Suma y promedio de los elementos del Arreglo 1 retornados mediante punteros: %d, %.2f\n", sum, average);
    return 0;
}
