#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    int max = arr[1];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

float calcAverage(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    float sum = (float) calcSum(arr, n);
    return (float) (sum / n);
}

int countEvens(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    int countPares = 0;
    for (int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            countPares++;
        }
    }
    return countPares;
}

int sumFirstLast(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    return arr[0] + arr[n-1];
}

int findMin(int arr[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    int min = arr[1];
    for (int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n)
{
    if (n <= 0) {
        return 0; // Return 0 for empty array
    }
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += (a[i] - b[i]);
    }
    return sum;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    
    int sumA = 0;
    int sumB = 0;
    
    if(n1 > 0){

    for(int i=0; i<n1; i++){
        sumA += a[i];
    }
}

    if(n2 > 0){
    for(int i=0; i<n2; i++){
        sumB += b[i];
    }
}
    return sumA + sumB;
}

int productArray(int arr[], int n)
{
    if (n <= 0) {
        return 1; // Return 1 for empty array (multiplicative identity)
    }
    int product = 1;
    for (int i=0; i<n; i++){
        product *= arr[i];
    }
    return product;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    int tempSum = 0;
    for (int i = 0; i < n; i++) {
        tempSum += arr[i];
    }
    *sum = tempSum;
    if (n > 0) {
        *average = (float)(tempSum / n);
    } else {
        *average = 0;
    }
}
