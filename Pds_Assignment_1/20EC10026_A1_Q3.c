/*
Name - Darpan Aswal
Roll Number - 20EC10026
Section - 3
*/
#include<stdio.h>

int main(){
    float x, Sum; // Defining float variables.
    int n; // Defining integer variable.
    printf("Enter x: "); // Taking input for x from user.
    scanf("%f", &x);

    printf("Enter n: "); // Taking input for n from user.
    scanf("%d", &n);

    Sum = ((n+1)*x) + (n*(n+1)/2); // Simplified result for the series x + (x+1) + (x+2) + ...... + (x+n)
    printf("The value of x entered is %f\n", x); // Printing the entered value of x
    printf("The sum of the series is %f", Sum); // Printing the sum of the series.

    return 0;
}