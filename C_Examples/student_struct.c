#include <stdio.h>
#include<string.h>

typedef struct{
    char name[20];
    int roll;
    float cg;
}student;

student Name(int n,student A[100])
{
    char s[20];
    printf("\nType name to search:\n");
    scanf("%s",&s);

    for(int i=0;i<n;i++)
    {
        if(strcmp(A[i].name,s)==0)
        {
            printf("Name: %s\n", A[i].name);
            printf("Roll Number: %d\n", A[i].roll);
            printf("CGPA: %f\n", A[i].cg);
        }
    }
}

student Roll(int n,student A[100])
{
    int a;
    printf("\nType roll number to search:\n");
    scanf("%d", &a);

    for(int i=0;i<n;i++)
    {
        if(A[i].roll==a)
        {
            printf("Name: %s\n", A[i].name);
            printf("Roll Number: %d\n", A[i].roll);
            printf("CGPA: %f\n", A[i].cg);
        }
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    student A[100];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of student %d:\n", i+1);
        printf("\nName: ");
        scanf("%s", &A[i].name);
        printf("\nRoll Number: ");
        scanf("%d", &A[i].roll);
        printf("\nCGPA: ");
        scanf("%f", &A[i].cg);
    }

    Name(n,A);
    Roll(n,A);

    return 0;
}
