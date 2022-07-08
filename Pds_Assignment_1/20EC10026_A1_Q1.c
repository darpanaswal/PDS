/*
Name - Darpan Aswal
Roll Number - 20EC10026
Section - 3
*/
#include <stdio.h>
#include <math.h> // Math library required for sin function.

int main()
{
    float X1 = (1.234 * pow(10, 5)); // Cannot use 1 float X because of limitations of bit size(Double would have worked but i haven't used it here). Pow used to calculate 10^5.
    float X2 = (7.5*pow(10,-3));

    double Z = 19.2*sin(25) + (5.6 + 12/7.2)*pow(10,5); // Using double instead of float because even two floats gave inaccurate value.

    printf("The value of X is %f\n", X1 + X2); // Printing X and Z.
    printf("The value of Z is %f\n", Z);

    return 0;
}