#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=1, c, i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Fibonacci series: \n0\n1\n");
    for(i=1;i<=n-2;i++){
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    getchar();
    return 0;
}
