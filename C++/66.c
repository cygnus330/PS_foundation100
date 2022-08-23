#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a>0) printf("plus");
    else printf("minus");
    printf("\n");
    if(a%2==0) printf("even");
    else printf("odd");

    return 0;
}
