#include <stdio.h>
#include <math.h>
int num_digits(int n){          // function to check number of digits in number, when n becomes equal to zero, loop will
    int num = 0;                //break because all digits will go behind decimal place indicating there are no more digits in the number, but since we have taken int, it will become 0 instead of some decimal number
    while (n>0){
        num++;
        n /= 10;
    }
    return num;
}

int isArmstrong(int n){
    int k = n;                      // function to check if number is armstrong number or not
    int m=0;
    int size = num_digits(n);       // calling num_digits function because we need the number of digits in each number
    while (n>0){
        m += (int)pow(n%10, size);  // to see if n digit number = summation of (digits^n)
        n /= 10;
    }
    if (k==m){
        return 1;                   // if number becomes equal to summation of (digits^n) return 1, else return 0
    }
    else return 0;
}

void printArmstrong(int s, int e){               // printer function, taking armstrong numbers identified by isArmstrong and giving command
    for (s=s; s<=e; s++){                        // to print
        if(isArmstrong(s)) printf("%d ", s);
    }
}
int main() {
    int s, e;
    printf("Enter the lower bound: ");    // main function, defining lower and upper limits,
    scanf("%d", &s);                      //do while loop so that user does not enter lower limit greater than upper limit.
    do{
        printf("\nEnter the upper bound: ");
        scanf("%d", &e);
        if (e<s) printf("\nEnter upper bound greater than lower bound");} while (s>e);
    printArmstrong(s, e);                                                               //calling function printArmstrong to print
    return 0;

}
