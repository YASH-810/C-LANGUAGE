//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,num=1;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=n;i>=1;i--) {
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }