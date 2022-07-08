#include<stdio.h>

int search(int A[], int n, int x)
{
    int i=n-1,flag=0;

    if(A[i]==x)
    {
        printf("Element is present");
    }
    else if(i>=0)
        search(A,n-1,x);
    else if(i<0)
        printf("Element is not present");

    return flag;
}

int main(){

    int n;
    printf("Array length: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter numbers in Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    int x;
    printf("Enter the number you're looking for: ");
    scanf("%d", &x);

    search(A,n,x);

return 0;
}

