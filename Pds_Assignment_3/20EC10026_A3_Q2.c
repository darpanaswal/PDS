/* Darpan Aswal
Roll Number - 20EC10026
Section 3
Group 3 */

#include<stdio.h>

int main(){
    int a,k=1,sum=0; //defining integers

    printf("Enter Number: "); //unser inputs a number
    scanf("%d", &a);

    while(k<a){        // while k<a if remainder of a and k is 0, loop will make sum=sum+k and then increment k by 1 and repeat same process till k=>a
        if(a%k==0)
        sum=sum+k;
        k++;
    }
    if(sum==a)
        printf("%d is a perfect number", k);    //if sum of all factors comes equal to number then it is a perfect number otherwise it is not.
    else
        printf("%d is not a perfect number", k);

    return 0;
}