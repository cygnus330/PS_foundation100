#include <stdio.h>

int main()
{
    int a;
    scan:
    scanf("%d", &a);
    if(a!=0)
    {
        printf("%d\n", a);
        goto scan;
    }

    return 0;
}
