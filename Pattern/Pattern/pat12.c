//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,num=1;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n+1;j++){
            if (i==1 || i==n || j==1 || j==n+1)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
 }