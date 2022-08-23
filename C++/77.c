#include <stdio.h>

int main()
{
    int a, i, s=0;
    scanf("%d", &a);
    for(i=0; i<=a; i=i+2)
    {
        s = s+i;
    }
    printf("%d", s);
    return 0;
}
