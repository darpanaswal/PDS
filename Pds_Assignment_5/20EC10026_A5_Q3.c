/* Darpan Aswal
   Roll Number - 20EC10026
   Section 3, Group 3 */

#include<stdio.h>

int digits(int n){          //digit counter function

    static int count=0;     //static int so that it does not initialise every time the function is called

    if(n>0)
        {
            count=count+1;          //for as long as we get n>0, count will increase by 1 because that indicates the number of digits
            return digits(n/10);    //n/10 may be a float but we have taken int, so the function will act on n/10 again
        }
    else
        return count;               //returns the actual number of digits
}

int isPalindrome(int n){        //palindrome checking function

    static int rev_n=0,rem;     //static int so that it does not initialise every time the function is called

   if(n!=0){                    //if n!=0, it will reverse the function to check if reverse is equal to the number iteslf
      rem=n%10;
      rev_n=rev_n*10+rem;
      isPalindrome(n/10);
    }
return rev_n;                   //returns the reverse of the number
}

int main(){

    int n,rev_n;
    printf("Enter a natural number: ");
    scanf("%d", &n);                    //enter the number you want to apply the functions to

    if(n>0)
    {
        printf("\nThe number of digits in %d is %d\n", n, digits(n));   //calls digits function

        rev_n = isPalindrome(n);    //defining reverse of number

        if(rev_n == n)
            printf("\n%d is a Palindrome\n", n);       //if reverse of number = number, it is a palindrome otherwise it isnt

        else
            printf("\n%d is not a Palindrome\n", n);
    }

    else
        printf("Boss only natural numbers allowed");


return 0;
}
