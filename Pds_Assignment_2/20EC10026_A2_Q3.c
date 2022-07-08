/* Darpan Aswal
Roll Number - 20EC10026
Section 3 
Group 3 */

#include<stdio.h>

int main(){
    char x;
    printf("Enter the Alphabet: "); //taking input for alphabet from user
    scanf("%c", &x);

    switch(x)
    {
        case 'A':
            printf("%c is a vowel",x); //setting A and a as vowels
            break;
        case 'a': 
            printf("%c is a vowel",x); 
            break;
        case 'E':
            printf("%c is a vowel",x); //setting E and e as vowels
            break;
        case 'e':
            printf("%c is a vowel",x);
            break;
        case 'I':
            printf("%c is a vowel",x); //setting I and i as vowels
            break;
        case 'i':
            printf("%c is a vowel",x); 
            break;
        case 'O':
            printf("%c is a vowel",x); //setting O and o as vowels
            break;
        case 'o':
            printf("%c is a vowel",x);
            break;
        case 'U' :
            printf("%c is a vowel",x); //setting U and u as vowels
            break;
        case 'u':
            printf("%c is a vowel",x);
            break;

        default:
            printf("%c is not a vowel",x); //any character besides a, e, i, o and u and A, E, I, O and U will be considered as a non vowel
    }
    return 0; // even if you enter a number, it will say that the number is not a vowel
}