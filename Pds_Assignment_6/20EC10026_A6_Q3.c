#include<stdio.h>

typedef struct{
    char name[20];      //defining a struct according to question
    int wages;
    int days;
}emp;

double netPay(int wages, int days){     //function for calculating net salary
    int BP = wages*days;
    double HRA,TA,netSAL;

    if(BP>1000)                         // if BP>1000 HRA will be 12% of BP otherwise itll be 20% of BP
        HRA = 0.12*BP;
    else
        HRA = 0.2*BP;

    if(days>19)                         // if days worked >19, TA will be 10% of BP otherwise itll be 0
        TA = 0.1*BP;
    else
        TA=0;

    netSAL = BP + HRA + TA;             // net salary is BP + HRA + TA

return netSAL;
}

int main()
{
    int n;
    printf("Enter the total number of employee(s) = ");
    scanf("%d", &n);                                        //taking input for number of employees

    emp A[n];                                               // employee sized array of the type emp(whose struct has been defined earlier)
    for (int i=0; i<n; i++){
        printf("\nEnter name of employee[%d] =\n", i+1);
        scanf("%s", A[i].name);                                                                 //taking input for employee name, wages/day
        printf("\nEnter wages/day and number of days present for employee[%d] = \n", i+1);      //and number of days worked
        scanf("%d %d", &A[i].wages, &A[i].days);
        printf("\nName:%s Netpay:%.2f\n", A[i].name, netPay(A[i].wages, A[i].days));            //printing net salary of employees by calling netPay function
    }

return 0;
}
