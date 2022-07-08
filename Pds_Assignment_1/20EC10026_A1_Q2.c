/*
Name - Darpan Aswal
Roll Number - 20EC10026
Section - 3
*/
#include<stdio.h>

int main(){
    int n, Sum;
    printf("Enter n: "); // Taking input for n from user.
    scanf("%d", &n);

    Sum = (n*(n+1)*(2*n+1))/6; // Simplified result for 1^2+2^2.......+n^2.
    printf("The value of n entered is %d\n", n); // Printing the value of n entered.    
    printf("The sum of the squares of integers upto n is %d\n", Sum); // Printing the value of the sum of the series.

    return 0;
}