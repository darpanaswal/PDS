#include <stdio.h>

int main(){

    int n, r, i, j;
    printf("Enter side length and number of rows: ");
    scanf("%d%d", &n, &r);

        for(int count=1;count<=r;++count){
            if(count%2!=0){
                for(i=1;i<=n;++i){
                    if(r%2==0){
                        for(int count1=1;count1<=r/2;++count1){
                            for(j=1;j<=n;++j)
                            printf("+ ");
                            for(j=1;j<=n;++j)
                            printf("- ");
                            }
                        }

                    else{
                        for(int count1=1;count1<=r/2;++count1){
                            for(j=1;j<=n;++j)
                            printf("+ ");
                            for(j=1;j<=n;++j)
                            printf("- ");
                            }
                            for(j=1;j<=n;++j){
                            printf("+ ");
                            }
                        }
                printf("\n");
                }
            }
            else{
                for(i=1;i<=n;++i){
                    if(r%2==0){
                        for(int count1=1;count1<=r/2;++count1){
                            for(j=1;j<=n;++j)
                            printf("- ");
                            for(j=1;j<=n;++j)
                            printf("+ ");
                            }
                        }
                    else{
                        for(int count1=1;count1<=r/2;++count1){
                            for(j=1;j<=n;++j)
                            printf("- ");
                            for(j=1;j<=n;++j)
                            printf("+ ");
                            }
                            for(j=1;j<=n;++j){
                            printf("- ");
                            }
                        }
                printf("\n");
                }
            }
        printf("\n");
    }
    return 0;
}
