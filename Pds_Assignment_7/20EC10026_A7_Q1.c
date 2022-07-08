/* Darpan Aswal
   20EC10026
   Section 3, Group 3 */

#include<stdio.h>
#include<string.h>

typedef struct{
    char word1[45],word2[45],word3[45],word4[45],word5[45];
}Sent;

void printSent(Sent N[],int n)
{
    for(int i=0;i<5*n;i++)
        printf("\n%s\n", N[i].word1,N[i].word2,N[i].word3,N[i].word4,N[i].word5);   //printer function
        return;
}

int main()
{
    char init_sentence[900],line;
    int i,n=1;
    printf("Enter a sentence with a maximum of 5 words:\n");    //take initial sentence
    scanf("%[^\n]", init_sentence);
    scanf("%c", &line);

    for (i = 0;init_sentence[i] != '\0';i++)
    {                                                               //count number of words
        if (init_sentence[i] == ' ' && init_sentence[i+1] != ' ')
            n++;
    }
    printf("Number of words in the entered sentence are: %d\n", n);

    if(n<=5)
    {
        char sentence[900], line;
        printf("\nPlease enter %d more sentences: \n", 5*n);        //takeing 5*n more sentences

        int j=0;

        Sent M[5*(n+1)];
        Sent N[5*(n+1)];

        char *init_token = strtok(init_sentence, " ");      //function in string library to separate words

        while(init_token!=NULL)
        {
            strcpy(M[0].word1, init_sentence);              //storing words of initial sentence
            init_token = strtok(NULL, " ");
            strcpy(M[0].word2, init_sentence);
            init_token = strtok(NULL, " ");
            strcpy(M[0].word3, init_sentence);
            init_token = strtok(NULL, " ");
            strcpy(M[0].word4, init_sentence);
            init_token = strtok(NULL, " ");
            strcpy(M[0].word5, init_sentence);
            init_token = strtok(NULL, " ");
        }

        while(j<5*n)
        {

            printf("\nEnter the sentence %d: \n", j+1);     //taking input for the subsequent sentences
            scanf("%[^\n]", sentence);
            scanf("%c", &line);

            int count=0;

            for (i = 0;sentence[i] != '\0';i++)
            {
                if (sentence[i] == ' ' && sentence[i+1] != ' ')     //counting again to satisfy number of words limit
                    count++;
            }

            if(count<5)
            {
                char *token = strtok(sentence, " ");        //copying word by word into M and N

                strcpy(M[j].word1, sentence);
                strcpy(N[j].word1, sentence);
                token = strtok(NULL, " ");
                strcpy(M[j].word2, sentence);
                strcpy(N[j].word2, sentence);
                token = strtok(NULL, " ");
                strcpy(M[j].word3, sentence);
                strcpy(N[j].word3, sentence);
                token = strtok(NULL, " ");
                strcpy(M[j].word4, sentence);
                strcpy(N[j].word4, sentence);
                token = strtok(NULL, " ");
                strcpy(M[j].word5, sentence);
                strcpy(N[j].word5, sentence);
                token = strtok(NULL, " ");

                j++;
            }
            else
                printf("\nSentence entered has more than 5 words, enter it again\n");   //if more than 5 words are entered, it will give error
        }

        printSent(N,n);         //calling printer function

    }

    else
    {
        printf("\nSentence entered has more than 5 words, bye\n");  // if initial sentence has more than 5 words, it will give error and exit.
    }
return 0;
}
