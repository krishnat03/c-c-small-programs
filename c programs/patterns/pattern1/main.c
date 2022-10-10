#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of lines in the upper half: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return 0;
}
