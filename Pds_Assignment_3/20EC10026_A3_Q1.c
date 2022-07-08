/* Darpan Aswal
Roll Number - 20EC10026
Section 3
Group 3 */

#include<stdio.h>
#include<math.h>

int main(){

    int n;
    double x,y,z,f,g,h,sinx,siny,sinz; // defining floating numbers in double and asking for user input for the 3 numbers
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter z: ");
    scanf("%lf", &z);
    printf("Enter n: ");
    scanf("%d", &n);


    int k=1;                       // starting from k=1, the while loop will keep on adding the successive terms until k becomes equal ton
    sinx=f=x;
    while(k<n){
        f= -(f)*x*x/(2*k)/(2*k+1); // every successive term is the last term multipied with -(f)*x*x/(2*k)/(2*k+1)
        sinx+=f; // forming summation series of sinx
        ++k; // after each addition k need to be incremented by 1
    }

    printf("sinx is %f\n", sinx); // printing sinx 

    int p=1;                           // for siny and sinz the same prodecude is followed
    siny=g=y;
    while(p<n){
        g= -(g)*y*y/(2*p)/(2*p+1);
        siny+=g;
        ++p;
    }

    printf("siny is %f\n", siny);

    int q=1;
    sinz=h=z;
    while(q<n){
        h= -(h)*z*z/(2*q)/(2*q+1);
        sinz+=h;
        ++q;
    }

    printf("sinz is %f\n", sinz);
    return 0;
}