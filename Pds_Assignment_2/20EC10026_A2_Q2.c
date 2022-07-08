/* Darpan Aswal
Roll Number - 20EC10026
Section 3 
Group 3 */

#include<stdio.h>

int main(){
    double x,y,addition,subtraction,multiplication,division; //defining doubles 

    printf("Enter x: ");//taking input for x and y from user
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    int a=x,b=y,remainder;//type-casting doubles x and y to integers
    
    if(x>0 && y>0){
        printf("The values of x and y entered are %f and %f ", x, y); // if-else loop. in case user enters a negative value, the program will ask the user to enter a positive real number in place of which value the user has entered incorrectly.
    }
    else if(x>0 && 0>y){
        printf("Please enter a positive real number for y");//if y entered is negative
    }
    else if(x<0 && y>0){
        printf("Please enter a positive real number for x");//if x entered is negative
    }
    else{ printf("Please enter a positive real number for x and y");//if x and y entered are both negative
    }

    addition=x+y; //defining operations
    subtraction=x-y;
    multiplication=x*y;
    division=x/y;
    remainder=a%b;

    printf("x+y is %lf\n", addition); //printing the values of the operations performed on the numbers
    printf("x-y is %lf\n", subtraction);
    printf("x*y is %lf\n", multiplication);
    printf("x/y is %lf\n", division);
    printf("x%%y is %d\n", remainder);


    return 0;
}