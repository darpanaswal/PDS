#include<stdio.h>

int reverse(int i,int n,char A[]){

    char temp;
    temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;

    if(i==n/2){
        return;
    }
    reverse(i+1,n,A);
}

int main(){

    int n;
    printf("Length of string: ");
    scanf("%d", &n);

    char A[n];
    printf("Enter string: ");
    scanf("%s", &A);

    printf("%c", A[n-1]);

    reverse(0,n,A);

    for(int i=0;i<n;i++){
        printf("%c", A[i]);
    }

return 0;
}
