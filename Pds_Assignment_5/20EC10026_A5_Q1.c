/* Darpan Aswal
   Roll Number - 20EC10026
   Section 3, Group 3 */

#include<stdio.h>

int lowest_form(int p,int q){      //recursive function to convert to lowest form.
                                   //what this function actually does is check if the inputs are co primes or nor, and if not, recursively
    int hcf;                       //call itself to act on the non co primes after dividing them with the hcf

    for(int i=1;i<=p;i++)           //as soon as the loop starts, hcf will be equal to 1, but if the loop finds another number that satisfies
	  if(p%i==0 && q%i==0)          //hcf will change to that number
        hcf = i;

	 if(hcf == 1)                                           //if hcf=1, our work is done,
	  printf("Lowest form of the fraction = %d/%d",p,q);    //if not, divide the numbers by the hcf and apply the same function.
	 else
	  lowest_form(p/hcf,q/hcf);

}

int main(){

    int p,q;                                    //taking 2 inputs
    printf("Enter 2 positive integers: ");
    scanf("%d%d", &p,&q);

    if(p>0&&q>0)                                //calling function
        lowest_form(p,q);
    else
        printf("Only positive integers plis");

return 0;
}
