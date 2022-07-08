#include<stdio.h>

int isFascinating(int n){

    int A[10] = {0,0,0,0,0,0,0,0,0,0};       // counter array for number of occurences for each digit 
    int a=2*n,b=3*n,i,last_digit;

    while(n>0){                              // checking digits of n 
        last_digit = n%10;                 
        A[last_digit]++;
        n=n/10;
    }
    while(a>0){
        last_digit = a%10;
        A[last_digit]++;
        a=a/10;
    }
    while(b>0){
        last_digit = b%10;
        A[last_digit]++;
        b=b/10;
    }

    int count=1;
                                             // checking to see if each digit has occured only once or not(except 0, which can occur infinite times)
    for(i=1;i<9;i++){
        if(A[i]!=1)                           
            count = 0;
    }
    return count;
}

int main(){

    int n;

    while(1){
        printf("Enter a positive integer with at least 3 digits: ");
        scanf("%d", &n);
        if(n>=100)
            break;
    }

    int result = isFascinating(n);

    if(result == 1)
        printf("\n%d is a Fascinating number\n", n);
    else
        printf("\n%d is not a Fascinating number\n", n);

return 0;
}
