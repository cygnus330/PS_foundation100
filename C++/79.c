#include <stdio.h>

int main()
{
    int a=0, b, i=0;
    scanf("%d", &b);
    while(a<b)
    {
        a+=i++;
    }
    printf("%d", i-1);

    return 0;
}
