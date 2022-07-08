#include <stdio.h>
#include <stdlib.h>

int checker(int n,int A[n][n])
{
    int P[n],Q[n],i,j;

    for(i=0;i<n;i++)
    {
        P[i]=0;
        Q[i]=0;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(A[i][j]==1)
                P[i]++;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(A[j][i]==1)
                Q[j]++;
    }

    for(i=0;i<n-1;i++)
        {
            if(P[i]!=P[i+1] || Q[i]!=Q[i+1])
            return 0;

            else return 1;
        }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int A[n][n];
    printf("Enter matrix elements(only 1s and 0s) : ");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &A[i][j]);

    printf("%d", checker(n,A));

    return 0;
}
