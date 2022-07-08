/* Darpan Aswal
Roll Number - 20EC10026
Section 3 
Group 3 */

#include<stdio.h>

int main(){
    int x,y,z,K,H,S; //defining integers 
    printf("Enter x: "); // taking input for x, y and z from user
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("The entered values are:\nx=%d\ny=%d\nz=%d\n", x, y, z);//printing values of x,y and z before operating K
    K=(x++) + (++y); // defining and printing K operator
    printf("K = %d\n", K);

    printf("The entered values are after K operation are:\nx=%d\ny=%d\nz=%d\n", x, y, z);//printing values of x,y and z after K but before H
    H=(++x) + (y++) - (z--);// defining and printing H operator
    printf("H = %d\n", H);

    printf("The entered values are after H operation are:\nx=%d\ny=%d\nz=%d\n", x, y, z);//printing values of x,y and z after K and H but before S
    S=(++x) + (--y)*(++z);// defining and printing S operator
    printf("S = %d", S);


    return 0;
}
