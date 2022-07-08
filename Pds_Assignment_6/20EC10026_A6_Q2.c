#include<stdio.h>
#include<string.h>

typedef struct{
    float x[21];
}POLY;

void readPoly(POLY *A)
{
    float x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
    scanf("%f", &x0);
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);
    scanf("%f", &x4);
    scanf("%f", &x5);
    scanf("%f", &x6);
    scanf("%f", &x7);
    scanf("%f", &x8);
    scanf("%f", &x9);
    scanf("%f", &x10);

 A->x[0] = x0; A->x[1] = x1; A->x[2] = x2; A->x[3] = x3; A->x[4] = x4; A->x[5] = x5; A->x[6] = x6; A->x[7] = x7; A->x[8] = x8; A->x[9] = x9; A->x[10] = x10;
}

void printPoly(POLY *A)
{
    for(int i=11;i<=20;i++)
        {
            if(A->x[i]!=0)
                {
                    printf("\nPolynomial is not of type POLY\n");
                    break;
                }
            else
                printf("\n(%0.1f) + (x^1)(%0.1f) + (x^2)(%0.1f) + (x^3)(%0.1f) + (x^4)(%0.1f) + (x^5)(%0.1f) + (x^6)(%0.1f) + (x^7)(%0.1f) + (x^8)(%0.1f) + (x^9)(%0.1f) + (x^10)(%0.1f)\n"
               ,A->x[0]
               ,A->x[1]
               ,A->x[2]
               ,A->x[3]
               ,A->x[4]
               ,A->x[5]
               ,A->x[6]
               ,A->x[7]
               ,A->x[8]
               ,A->x[9]
               ,A->x[10]);
               break;
        }
}

void addPoly(POLY *A, POLY *B, POLY *C)
{
    for(int i=0;i<=10;i++)
        C->x[i] = A->x[i] + B->x[i];
}

void multPoly(POLY *A, POLY *B, POLY *D)
{
    for(int i=0;i<=20;i++)
    {
        float y = 0;
        for(int j=0, k=i ; j<=i && k>=0 ; j++, k--)
        {
            y += A->x[j]*B->x[k];
        }
        D->x[i] = y;
    }
}

int main()
{
    POLY A,B;

    printf("Enter the coefficients of A: \n");
    readPoly(&A);

    printf("\nEnter the coefficients of B: \n");
    readPoly(&B);

    POLY C;
    addPoly(&A,&B,&C);
    printf("\nPolynomial C is :\n");
    printPoly(&C);

    POLY D;
    multPoly(&A,&B,&D);
    printf("\nPolynomial D is :\n");
    printPoly(&D);

return 0;
}
