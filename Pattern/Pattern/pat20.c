//TO PRINT PATTERN
#include<stdio.h>
 int main(){
    int n,i,j,s,k,num=1;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for(s=1;s<=n-i;s++){
        printf(" ");}
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(k=1;k<=i;k++)
            printf("%c",64+k);
        printf("\n");
    }
    return 0; 
    }