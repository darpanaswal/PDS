#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct{
    char word1[45],word2[45],word3[45],word4[45],word5[45],word6[45],word7[45],word8[45],word9[45],word10[45];
    bool correct;
    int length;
}Sent;

Sent *charArr(char *sentence)
{
    Sent A;

    A.word1[0] = '\0';          // very important
    A.word2[0] = '\0';
    A.word3[0] = '\0';
    A.word4[0] = '\0';
    A.word5[0] = '\0';
    A.word6[0] = '\0';
    A.word7[0] = '\0';
    A.word8[0] = '\0';
    A.word9[0] = '\0';
    A.word10[0] = '\0';

    char word[45];
    int i=0,k=0,count=0;

    for(i=0;i<=strlen(sentence);i++)
    {
        if(sentence[i]!=' ' && sentence[i]!='\0')
        {
            word[k]=sentence[i];
            k++;
        }

        else if(sentence[i]==' ' || sentence[i]=='\0')
        {
            word[k] = '\0';                                  // very important
            count++;

            if (count==1)
                strcpy(A.word1,word);
            else if (count==2)
                strcpy(A.word2,word);
            else if (count==3)
                strcpy(A.word3,word);
            else if (count==4)
                strcpy(A.word4,word);
            else if (count==5)
                strcpy(A.word5,word);
            else if (count==6)
                strcpy(A.word6,word);
            else if (count==7)
                strcpy(A.word7,word);
            else if (count==8)
                strcpy(A.word8,word);
            else if (count==9)
                strcpy(A.word9,word);
            else if (count==10)
                strcpy(A.word10,word);

            k=0;

            for (int j=0;j<45;j++)
                word[j] = 0;
        }
    }

    if(count>10)
        A.correct = false;
    else
        A.correct = true;

    A.length = count;

    Sent *sp = &A;
return sp;
}

Sent *changeSent(Sent *sp)
{
    Sent newSent;
    Sent *newsp = &newSent;

    int i;

    for(int j=0;j<10;j++)
    {
        if(j==0)
        {
            char temp[45] = "";
            for(i=0;i<strlen(sp->word1);i++)
                strcat(temp, "*");

            strcpy(newsp->word1,temp);
            printf("\n%s ", newsp->word1);
        }

        else if(j==1)
        {
            strcpy(newsp->word2,sp->word2);
            printf("%s ", newsp->word2);
        }

        else if(j==2)
        {
            char temp[45] = "";
            for(i=0;i<strlen(sp->word3);i++)
                strcat(temp, "*");

            strcpy(newsp->word3,temp);
            printf("%s ", newsp->word3);
        }

        else if(j==3)
        {
            strcpy(newsp->word4,sp->word4);
            printf("%s ", newsp->word4);
        }

        else if(j==4)
        {
            char temp[45] = "";
            for(i=0;i<strlen(sp->word5);i++)
                strcat(temp, "*");

            strcpy(newsp->word5,temp);
            printf("%s ", newsp->word5);
        }

        else if(j==5)
        {
            strcpy(newsp->word6,sp->word6);
            printf("%s ", newsp->word6);
        }

        else if(j==6)
        {
            char temp[45] = "";
            for(i=0;i<strlen(sp->word7);i++)
                strcat(temp, "*");

            strcpy(newsp->word7,temp);
            printf("%s ", newsp->word7);
        }

        else if(j==7)
        {
            strcpy(newsp->word8,sp->word8);
            printf("%s ", newsp->word8);
        }

        else if(j==8)
        {
            char temp[45] = "";
            for(i=0;i<strlen(sp->word9);i++)
                strcat(temp, "*");

            strcpy(newsp->word9,temp);
            printf("%s ", newsp->word9);
        }

        else if(j==9)
        {
            strcpy(newsp->word10,sp->word10);
            printf("%s", newsp->word10);
        }

        else
            printf("Nothing");
    }

    newsp->correct = sp->correct;
    newsp->length = sp->length;
return newsp;
}

int changePara(Sent *A[], int n, int i)
{
    if(i > n-1)
    {
        return 0;
    }

    else
    {
        if(i%2 == 0)
            {
                Sent newSent = *(changeSent(A[i]));
                strcpy(A[i]->word1, newSent.word1);
                strcpy(A[i]->word2, newSent.word2);
                strcpy(A[i]->word3, newSent.word3);
                strcpy(A[i]->word4, newSent.word4);
                strcpy(A[i]->word5, newSent.word5);
                strcpy(A[i]->word6, newSent.word6);
                strcpy(A[i]->word7, newSent.word7);
                strcpy(A[i]->word8, newSent.word8);
                strcpy(A[i]->word9, newSent.word9);
                strcpy(A[i]->word10, newSent.word10);
            }
        return changePara(A, n, i+1);
    }

return 0;
}


int printPara(Sent *A[], int n, int i)
{
    if (i >= n)
    {
        return 0;

    }
    else
    {
        if(A[i]->length >= 1) printf("\n%s ",A[i]->word1);
        if(A[i]->length >= 2) printf("%s ",A[i]->word2);
        if(A[i]->length >= 3) printf("%s ",A[i]->word3);
        if(A[i]->length >= 4) printf("%s ",A[i]->word4);
        if(A[i]->length >= 5) printf("%s ",A[i]->word5);
        if(A[i]->length >= 6) printf("%s ",A[i]->word6);
        if(A[i]->length >= 7) printf("%s ",A[i]->word7);
        if(A[i]->length >= 8) printf("%s ",A[i]->word8);
        if(A[i]->length >= 9) printf("%s ",A[i]->word9);
        if(A[i]->length >= 10) printf("%s ",A[i]->word10);
        return printPara(A, n, i+1);
    }

return 0;
}


int main()
{
    int n;
    char sentence[1000], newline;
    printf("Enter the number of sentences you want to enter: ");
    scanf("%d", &n);
    scanf("%c", &newline);

    Sent A[n];
    Sent *B[n];
    int i=0;

    while(i<n)
    {
        printf("\nEnter sentence %d: ", i+1);
        scanf("%[^\n]", sentence);
        scanf("%c", &newline);

        A[i] = *(charArr(sentence));
        B[i] = &A[i];
        if(A[i].length>10)
        {
            printf("\nEnter a sentence with at most 10 words\n");
        }

        else
        {
            i++;
        }
    }


    printf("\nOriginal Paragraph\n");
    printPara(B,n,0);

    printf("\n\nModifying Process\n");
    changePara(B,n,0);

    printf("\n\nModified Paragraph\n");
    printPara(B,n,0);

}

