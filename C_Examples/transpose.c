#include <stdio.h>
#include <stdlib.h>

int transpose(int m,int n,int A[m][n])
{
    int A1[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        A1[i][j] = A[j][i];

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ", A1[i][j]);
    }
    printf("\n");
}
int main()
{
    int m,n;
    printf("Enter m&n(<100): ");
    scanf("%d%d",&m,&n);

    int A[m][n];
    printf("Enter matrix elements: ");

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &A[i][j]);

        transpose(m,n,A);

    return 0;
}
