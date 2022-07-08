#include<stdio.h>

int digit_count(int n){

  int count=0;

  if(n!=0){
    count++;
    return count+digit_count(n/10);
  }

  else
    return 0;
}

int main(){

  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  printf("Total number of digits is %d", digit_count(n));

return 0;
}
