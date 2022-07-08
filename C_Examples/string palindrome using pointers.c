#include <stdio.h>
#include <string.h>

int checkPalindrome(char *s)
{
    int x = strlen(s), count=0;

    for(int i=0;i<x/2;i++)
    {
        if(s[i]!=s[x-i-1])
            return 1;
    }
return 0;
}

void printString(char *s)
{
    printf("\n\n%s", s);
}


int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);ś

    printString(s);

    int result = checkPalindrome(s);
    if(result==0)
        printf("\nIt is a Palindrome\n");
    else
        printf("\nNot a palindrome\n");

return 0;
}
