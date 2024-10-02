//TO PRINT EQUAL ROWS AND COLUMN 
#include<stdio.h>
 main(){
    int n,i,j;
    printf("Enter row and column \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}    