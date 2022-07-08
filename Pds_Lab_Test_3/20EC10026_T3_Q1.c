/*Darpan Aswal
20EC10026
Section 3, Group 3*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[25], country[25], dob[8], dod[8];                             //defining appropriate structure
    int test, odi, cen, half_cen, run_test, run_odi, wic_test, wic_odi;
}Player;

void count_recursive(Player *A, int m, int i, int *count, int num)      //recursive function to calculate number of players that have played
{                                                                       // a given number of ODIs
    if(i==m)
        return;     // if index is already equal to size of array, no point in calculating further

    if(A[i].odi>=num)           //if a player is found whose number of odis played is greater than or equal to given number
        (*count) = (*count)+1;  //count will be increased by 1

    count_recursive(A,m,i+1,count,num); //recursively calling it again
}

void count(Player *A, int m)
{
    int num, count=0;
    printf("\nEnter a number: ");   //give number of odis
    scanf("%d", &num);

    for(int i=0;i<m;i++)      //loop to search for players who have played greater than or equal to num odis
    {
        if(A[i].odi>=num)
            count++;
    }

    printf("\nNumber of players to have played at least %d ODIs: %d", num, count); // printing the number
}

Player *sort(Player *A, int m)
{
    Player temp;
    for(int i=0;i<m-1;i++)      //nested loop to have every possible comparison
    {
        for(int j=i+1;j<m;j++)
        {
            if(A[i].name[0]>A[j].name[0])   //if element1 has greater ascii value than element2, they should interchange
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }

            else if(A[i].name[0]==A[j].name[0] && A[i].name[1]>A[j].name[1])    //comparing 2nd letters if first letters are found same
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }

            else if(A[i].name[0]==A[j].name[0] && A[i].name[1]==A[j].name[1] && A[i].name[2]==A[j].name[2])
            {
                temp=A[i];                                      //comparing 3rd letters if first and second letters found same
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}

void print(Player *A, int m)        //simple print function printing the entire list, nothing to explain
{
    for(int i=0;i<m;i++)
    {
        printf("\nName: %s\n", A[i].name);
        printf("\nCountry: %s\n", A[i].country);
        printf("\nDOB: %s\n", A[i].dob);
        printf("\nDebut Date in first class match: %s\n", A[i].dod);
        printf("\nNumber of tests played: %s\n", A[i].test);
        printf("\nNumber of ODIs played: %s\n", A[i].odi);
        printf("\nNumber of centuries scored: %s\n", A[i].cen);
        printf("\nNumber of half centuries scored: %s\n", A[i].half_cen);
        printf("\nTotal runs scored in tests: %s\n", A[i].run_test);
        printf("\nTotal runs scored in ODIs: %s\n", A[i].run_odi);
        printf("\nNumber of wickets taken in tests: %s\n", A[i].wic_test);
        printf("\nNumber of wickets taken in ODIs: %s\n", A[i].wic_odi);
    }
}

int main()
{
    int n;
    char newline;                              //initial size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    Player *A;
    A = (Player *)malloc(n*sizeof(Player));     //dynamically allocating space

    printf("\nEnter the details of the %d players: ", n);       //input details of players
    for(int i=0;i<n;i++)
    {
        printf("\nPlayer %d details: \n\n", i+1);
        printf("Name: ");
        scanf("%s", A[i].name);
        printf("\nCountry: ");
        scanf("%s", A[i].country);
        scanf("%c", &newline);
        printf("\nDate of Birth(Format DD MM YY): ");
        scanf("%[^\n]", A[i].dob);
        scanf("%c", &newline);
        printf("\nDate of debut first class match: ");
        scanf("%[^\n]", A[i].dod);
        scanf("%c", &newline);
        printf("\nNumber of tests played: ");
        scanf("%d", &A[i].test);
        printf("\nNumber of odi played: ");
        scanf("%d", &A[i].odi);
        printf("\nNumber of centuries scored: ");
        scanf("%d", &A[i].cen);
        printf("\nNumber of half centuries scored: ");
        scanf("%d", &A[i].half_cen);
        printf("\nTotal runs scored in test matches: ");
        scanf("%d", &A[i].run_test);
        printf("\nTotal runs scored in one day international matches: ");
        scanf("%d", &A[i].run_odi);
        printf("\nTotal number of wickets taken in tests matches: ");
        scanf("%d", &A[i].wic_test);
        printf("\nTotal number of wickets taken in one day international matches: ");
        scanf("%d", &A[i].wic_odi);
    }

    while(1)
    {
        printf("\n1.Define new size for array\n2.Find players who have played a given number of ODIs using recursion\n"
               "3.Find players who have played a given number of ODIs\n4.Sort alphabetically\n"
               "5.Print list in alphabetical order\n");         //creating menu interface

        int x;
        printf("\nChoose one of the options: ");
        scanf("%d", &x);

        int m;

        switch(x)
        {
        case 1:
            printf("\nEnter new size of array: ");      //press 1 to add or remove players
            scanf("%d", &m);

            if(m<n)
                A = (Player *)realloc(A,m);             //if m<n, elements after m spaces in array will be removed using realloc

            else if(m==n)
            {
                printf("\nSame size has been entered\n");   //if m=n, nothing happens
                break;
            }

            else
            {
                printf("\nEnter details of the %d new players: \n", m-n);   //if m>n, enter the details of the new m-n players
                for(int i=n;i<m;i++)
                {
                    printf("\nPlayer %d details: \n\n", i+1);
                    printf("Name: ");
                    scanf("%s", A[i].name);
                    printf("\nCountry: ");
                    scanf("%s", A[i].country);
                    scanf("%c", &newline);
                    printf("\nDate of Birth(Format DD MM YY): ");
                    scanf("%[^\n]", A[i].dob);
                    scanf("%c", &newline);
                    printf("\nDate of debut first class match: ");
                    scanf("%[^\n]", A[i].dod);
                    scanf("%c", &newline);
                    printf("\nNumber of tests played: ");
                    scanf("%d", &A[i].test);
                    printf("\nNumber of odi played: ");
                    scanf("%d", &A[i].odi);
                    printf("\nNumber of centuries scored: ");
                    scanf("%d", &A[i].cen);
                    printf("\nNumber of half centuries scored: ");
                    scanf("%d", &A[i].half_cen);
                    printf("\nTotal runs scored in test matches: ");
                    scanf("%d", &A[i].run_test);
                    printf("\nTotal runs scored in one day international matches: ");
                    scanf("%d", &A[i].run_odi);
                    printf("\nTotal number of wickets taken in test matches: ");
                    scanf("%d", &A[i].wic_test);
                    printf("\nTotal number of wickets taken in test matches: ");
                    scanf("%d", &A[i].wic_odi);
                }
            }
            break;

        case 2:                // if 2 is pressed, calling recursive function to calculate number of players that have played a given
            m = sizeof(A);          //number of odis but not printing the value
            int* countr = (int *) malloc(sizeof(int));
            *countr = 0;
            int num;
            printf("\nEnter a number: ");
            scanf("%d", &num);
            count_recursive(A, m, 0, countr, num);
            break;

        case 3:             //if 3 is pressed, calling function to calculate number of players that have played a given number of odis
            m = sizeof(A);  //and printing the value
            count(A,m);
            break;

        case 4:
            m = sizeof(A);  //if 4 is pressed, sorting the list alphabetically
            sort(A,m);
            break;

        case 5:
            m = sizeof(A);  //if 5 is pressed, sorting the list alphabetically  and then printing it
            sort(A,m);
            print(A,m);
            break;

        default:            //invalid input
            printf("Invalid input");
            break;

        }
    }

return 0;
}
