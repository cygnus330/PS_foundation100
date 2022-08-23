#include <stdio.h>
int main()
{
    long long int a, b, c, d, e, f, g;
    float h;
    scanf("%lld %lld", &a, &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    h=float(a)/float(b);
    printf("%lld", c);
    printf("\n%lld", d);
    printf("\n%lld", e);
    printf("\n%lld", f);
    printf("\n%lld", g);
    printf("\n%.2f", h);
}
