#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    re:
    scanf("%d", &b);
    printf("%d\n", b);
    if(a--!=1) goto re;

    return 0;
}
