//TO PRINT 
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}    
