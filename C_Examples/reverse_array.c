#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter numbers: ");

    for(int i=1;i<=n;i++){
        scanf("%f", &arr[i-1]);
    }

    printf("Initial Order: ");

    for(int j=0;j<=n-1;j++){
        printf("%f ", arr[j]);
    }

    int start = 0;
    int end = n -1;

    while(start<end){
        float temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed Order: ");

    for(int k=0;k<=n-1;k++){
        printf("%f ", arr[k]);
    }

return 0;
}
