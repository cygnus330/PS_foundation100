#include <stdio.h>

int main()
{
    int a=1;
    scanf("%d", &a);
    while(a!=0)
    {
        printf("%d\n", a);
        scanf("%d", &a);
    }
}
