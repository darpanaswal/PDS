#include <stdio.h>
#include <stdlib.h>

int upperTriangular(int n,int A[n][n])
{

    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(A[j][i]!=0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter n(<100): ");
    scanf("%d", &n);

    int A[n][n];
    printf("Enter matrix elements: ");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &A[i][j]);

    printf("%d", triangular(n,A));

    return 0;
}
