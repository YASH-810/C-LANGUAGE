//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,s;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for(j=1;j<=i;j++){
            printf("*");
        }
        s =2*(n-i);
        for (j=1;j<=s;j++){
            printf(" ");
        }
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
 }
  return 0;
 }