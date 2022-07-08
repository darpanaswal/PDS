#include <stdio.h>
#include<string.h>

char reverse(char *s)
{
    int len = strlen(s);
    char temp[1];

    for(int i=0;i<len/2;i++)
    {
        temp[0]=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp[0];
    }

return *s;
}

int main()
{
    char s[100];
    printf("Enter a string:\n");
    scanf("%s", s);

    printf("%s\n", s);
    reverse(s);
    printf("%s\n", s);

return 0;
}
