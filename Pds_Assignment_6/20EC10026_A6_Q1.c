#include <stdio.h>
#include<string.h>

typedef struct{         //defining struct according to question
    char name[20];
    char roll[9];
    float cg;
}student;


student printStudent(int n,int count,int count1, student A[n])  //prints names and roll numbers of highest and lowest scorers
{

    for(int i=0;i<n;i++)
    {
        if(count==A[i].cg)
            {
                printf("\n                                            Top scorers Names: %s\n", A[i].name);//if A[i].cg=count, it will print
                printf("\n                                            Roll Number: %s\n", A[i].roll);//those who got the highest cgpa
            }

        else if(count1==A[i].cg)
            {
                printf("\n                                            Low scorers Names: %s\n", A[i].name);//smiliar, but for lowest cgpa
                printf("\n                                            Roll Number: %s\n", A[i].roll);
            }
    }
}

int main()
{
    int n;
    printf("Enter number of students: ");   //enter number of students
    scanf("%d", &n);

    student A[n];       //array of type student of appropriate size

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of student %d:\n", i+1);    //enter details like name, roll number and CGPA
        printf("\nName: ");
        scanf("%s", &A[i].name);
        printf("\nRoll Number: ");
        scanf("%s", &A[i].roll);
        printf("\nCGPA: ");
        scanf("%f", &A[i].cg);
    }


    int count = 0;      //counter variable for MAX CGPA

    for(int i=0;i<n;i++)    //if any term if bigger than count, count will switch to that term, and finally find the MAX CGPA
    {
        if(A[i].cg>count)
            count = A[i].cg;
    }
    printStudent(n,count,0,A);  //taking count1 to be 0 to avoid printing lowest scorers
    printf("\n                                               Highest CGPA of %d\n",count);//leaving gaps to beautify, you will see when you
                                                                                          //run the code

    int count1=10;                      // similarly for MIN CGPA

    for(int i=0;i<n;i++)
    {
        if(A[i].cg<count1)
            count1 = A[i].cg;
    }
    printStudent(n,11,count1,A);
    printf("\n                                               Lowest CGPA of %d\n",count1);

    return 0;
}
