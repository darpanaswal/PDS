#include<stdio.h>

int binary(double n){

    int x = n;

    if(x<2)
        return x%2;
    else
    {
        return x%2 + 10*binary(x/2);
    }
}

int main(){

    double n;
    printf("Enter a positive number to convert to binary: ");
    scanf("%lf", &n);

    printf("%d", binary(n));

return 0;
}
