# include <stdio.h>

void reverseArray(int A[],int *left,int *right)
{
    int temp;
    while (left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

void printArray(int A[],int length)
{
    int i;
    for (i=0;i<length;i++)
    {
        printf("%d, ",*(A+i));
    }
}
int main()
{
    int n,i,array[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&array[i]);
    }
    printf("\nThe original array is: \n");
    printArray(array,n);

    //reversing the array
    reverseArray(array,&array[0],&array[n-1]);
    printf("\nThe reversed array is: \n");
    printArray(array,n);
    return 0;
}
