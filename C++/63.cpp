#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    t = a<b ? a : b;
    t = c<t ? c : t;
    printf("%d", t);

    return 0;
}
