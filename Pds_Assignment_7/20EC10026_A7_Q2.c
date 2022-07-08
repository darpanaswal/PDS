/* Darpan Aswal
   20EC10026
   Section 3, Group 3 */

#include <stdio.h>
#include <stdlib.h>

int* Merge(int *X, int *Y,int n, int m);

int main()
{
    int n,m,i,j;

    printf("Enter length of array 1: ");        //length of array 1
    scanf("%d", &n);

    int *X = (int *)malloc(n*sizeof(int));      //dynamically allotting memory

    printf("Enter elements in array 1: ");

    for(i=0;i<n;i++){
        scanf("%d", (X+i));                      //enter the elements of array 1, but elements should be sorted
    }

    printf("\nEnter length of array 2: ");       //length of array 2
    scanf("%d", &m);

    int *Y = ( int *)malloc(m*sizeof(int));         //dynamically allotting memory

    printf("Enter elements in array 2: ");

    for(i=0;i<m;i++){
        scanf("%d", (Y+i));                         //enter the elements of array 2, but elements should be sorted
    }
    int *M=Merge(X,Y,n,m);                          //calling function to merge the arrays 1 and 2

    printf("\nThe merged array is: \n");
    for(i=0;i<(n+m);i++){
        printf("%d ", *(M+i));                      //printing the merged array
    }

    return 0;
}

int* Merge(int *X, int *Y,int n, int m){

    int i=0,j=0,k=0;
    int *M= (int *)malloc((n+m)*sizeof(int));     //allocating memory for Merged array

    while(i<n && j<m)
    {
        if(*(X+i)<=*(Y+j))    //for each value of i and j, comparing elements of X and Y to find the smallest so that value can be
        {
            *(M+k)=*(X+i);    //added to Merged array, this will only work if both the arrays X and Y are already sorted
            i++;
        }
        else
        {
            *(M+k)=*(Y+j);
            j++;
        }
        k++;
    }
                              //it is possible that the above while loop does not carry all the elements entered into the array
    while(i<n)
    {
        *(M+k)=*(X+i);        //the 2 loops below take care of that
        i++;
        k++;                  //any elements left will now copied into the merged array
    }

    while(j<m)
    {
        *(M+k)=*(Y+j);
        j++;
        k++;
    }
    return M;
}

