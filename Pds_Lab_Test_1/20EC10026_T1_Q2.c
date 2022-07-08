#include <stdio.h>
int main() {
   int p, q, n; //defining integers, one of which is equal to the number of rows
   printf("Enter the number of rows: "); //taking input for number of rows
   scanf("%d", &n);
   for (p = 1; p <= n; p++) {

      for(q = p; q<n ; q++){ // this particular for is to reverse the pyramid
        printf(" ");
      }                      //creating loop for printing of pattern
      for (q = 1; q <= p; q++) {
         printf("*"); // in first row it will print a space then a star, in 2nd row: space, star,space star and so on....
      }
      printf("\n");
   }
   for (p = n; p >= 1; p--) {
      for (q = p; q<n ; q++){ // this particular for is to reverse the pyramid
        printf(" ");
      }                        //creating a similar loop but for # and also the pattern will be reversed
      for (q = 1; q <= p; q++) {
         printf("#");
      }
      printf("\n");
   }
   return 0;
}
