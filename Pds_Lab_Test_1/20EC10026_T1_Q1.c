#include<stdio.h>
#include<math.h>

int main(){
    int a,fact=1,i; //defining the int and float variable need later. also defining fact to calculate factorial values
    float x,sinhx,f;

    int k=0; //starting with k=0
    while(1) // infinite loop for taking input for x
        {printf("Enter x: ");
        scanf("%f", &x);
        while(1) // another infinite loop for calculating values of each individual term and the summation
        {if(x<0 || 1<x) //if x lies in this range, it will neglect the entire code written after this
            continue;
        for(i=1;i<(2*k+1);i++) // defining factorial
            fact=fact*i;
        if(0<=x && x<=1) //will work only for suck values of x
            a=fact*(2*k+1); //we need factorial (2k+1) in denominator of sinhx
            sinhx=pow(x,2*k+1)/a;
            if(sinhx<0.000001) // if sinhx goes less than 10^-6 magnitude, it will stop calculating terms
            break;
            if(sinhx>0.000001) // for all sinhx terms greater than 10^-6, it will print them and present them as a series
            printf("%f + ", sinhx);
            ++k;

            f+=sinhx;} //calculates the sum of all the terms till 10^-6 order

    printf("\nThe summation of the series is %f\n", f);} // printing the sum
return 0;
}
