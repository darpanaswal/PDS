/* Darpan Aswal
   Roll Number - 20EC10026
   Section 3, Group 3 */

#include<stdio.h>

long fibonacci(int n){                      //fibonacci recursive program
                                            //if n is less than or equal to 1, it will simply return n because F(1)=1 and F(2)=1(known values)
    if(n<=1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);     //else if will calculate value by using recursion
}

int main(){

    int n,i;                                                    //till what term to print the numbers?
    printf("How many Fibonacci numbers to print boss: ");
    scanf("%d", &n);

    if(n>0)
    {
        printf("Here's your fibonacci sequence: \n");
        for(i=1;i<=n;i++)
            printf("\nf(%d) = %ld", i,fibonacci(i));                //calling fibonacci function in loop to print all the numbers
    }

    else
        printf("\nPositive integer bola na\n");

return 0;
}
