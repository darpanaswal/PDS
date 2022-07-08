#include <stdio.h>
int main()
{
    int n, i = 1, a = 0;
    int x, y, p2, k;
    int count1 = 0, count2 = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("\n1 is neither a prime nor a composite number"); // stating that 1 is neither prime nor composite
        return 0;
    }
    while (i < n / 2) 
    {
        i += 1;
        if (n % i == 0) // while half of the number entered is greater than i, and if the remainder of the number n with i+1 is 0, then it will be a composite number 
        {
            printf("\nn is a composite number");
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("\nn is a prime number"); // using 2 counter variable to identify if 2 numbers before the number are prime or not and if it is then checking if 2 numbers after if also prime or not, and then printing
    for (x = 3; x < n; x++)
    {
        for (y = 2; y < x; y++)
        {
            if (x % y == 0)
            {
                count1++;
                break;
            }
        }
        p2 = x + 2;
        for (k = 2; k < x; k++)
        {
            if (p2 % k == 0)
            {
                count2++;
                break;
            }
        }
        if (count1 == 0 && count2 == 0)
        {
            printf("\n(%d,%d)", x, x + 2);
        }
        count1 = 0;
        count2 = 0;
    }
    return 0;
}