//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,num=1;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++){
            printf("%c",96+num);
            num++;
        }
        printf("\n");
    }
    return 0;
 }