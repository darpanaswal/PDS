#include<stdio.h>

int main(){

  int r,space,i,j;
  printf("Enter the number of rows: ");
  scanf("%d",&r);

  for(i=1;i<=r;i++){
    for(space=r;space>=i;space--){
      printf(" ");
    }
    for(j=i;j<=2*i-1;j++){
      printf("%d", j);
      }
    for(j=j-2;j>=i;j--){
      printf("%d", j);
    }
printf("\n");
  }
  return 0;
}
