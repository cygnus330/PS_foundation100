/*
#include <stdio.h> //81

int main()
{
    int a, i;
    scanf("%X", &a);
    for(i=1; i<=15; i++)
    {
        printf("%X*%X=%X\n", a, i, a*i);
    }
    return 0;
}
*/
/*
#include <stdio.h> //82

int main()
{
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        if(i%3==0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}
*/
/*
#include <stdio.h> //83

int main()
{
    int a, b, c, i, j, k;
    scanf("%d %d %d", &a, &b, &c);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            for(k=0; k<c; k++) printf("%d %d %d\n", i, j, k);
        }
    }
    printf("%d", i*j*k);

    return 0;
}
*/
/*
#include <stdio.h> //84

int main()
{
    int h, b, c, s;
    double n;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    n= (double)h*b*c*s/(8*1024*1024);
    printf("%.1lf MB", n);

    return 0;
}
*/
/*
#include <stdio.h> //85

int main()
{
    int w, h, b;
    double s;
    scanf("%d %d %d", &w, &h, &b);
    s= (double)w*h*b/(8*1024*1024);
    printf("%.2lf MB", s);

    return 0;
}
*/
/*
#include <stdio.h> //86

int main()
{
    int a, s=0, i=0;
    scanf("%d", &a);
    do
    {
        s+=i++;
    } while(s<a);

    printf("%d", s);

    return 0;
}
*/
/*
#include <stdio.h> //87

int main()
{
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
        if(i%3!=0) printf("%d ", i);

    return 0;
}
*/
/*
#include <stdio.h> //88

int main()
{
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);
    printf("%d", a+d*(n-1));

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a, r, n, i;
    scanf("%d %d %d", &a, &r, &n);
    long long int an= a;
    for(i=1; i<n; i++) an*= r;
    printf("%lld", an);

    return 0;
}
*/
/*
#include <stdio.h> //90

int main()
{
    int m, d, n, i;
    long long int a;
    scanf("%lld %d %d %d", &a, &m, &d, &n);
    for(i=0; i<n-1; i++)
    {
        a*=m;
        a+=d;
    }
    printf("%lld", a);

    return 0;
}
*/
/*
#include <stdio.h> //91

int main()
{
    int a, b, c, n;
    scanf("%d %d %d", &a, &b, &c);
    n= 1;
    while(n%a!=0 || n%b!=0 || n%c!=0)
    {
        n++;
    }
    printf("%d", n);
}
*/
/*
#include <stdio.h> //92

int main()
{
    int a[24], n, i, t;
    scanf("%d", &n);
    for(i=0; i<23; i++) a[i+1]=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=0; i<23; i++) printf("%d ", a[i+1]);

    return 0;
}
*/
/*
#include <stdio.h> //93

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=n-1; i>=0; i--) printf("%d ", a[i]);

    return 0;
}
*/
/*
#include <stdio.h> //94
#include <limits.h>

int main()
{
    int n, i, m= INT_MAX;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) if(a[i]<m) m= a[i];
    printf("%d", m);

    return 0;
}
*/
/*
#include <stdio.h> //95

int main()
{
    int g[20][20]= {}, n, a, b, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        g[a][b]=1;
    }

    for(i=1; i<=19; i++)
    {
        for(j=1; j<=19; j++)
        {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h> //96

int main()
{
    int a, b, g[20][20]= {}, i, j, n;
    for(i=1; i<=19; i++)
        for(j=1; j<=19; j++)
            scanf("%d", &g[i][j]);
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        for(j=1; j<=19; j++)
        {
            if(g[j][b]==0) g[j][b]= 1;
            else g[j][b]=0;
            if(g[a][j]==0) g[a][j]= 1;
            else g[a][j]= 0;
        }
    }
    for(i=1; i<=19; i++)
    {
        for(j=1; j<=19; j++)
            printf("%d ", g[i][j]);
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h> //97

int main()
{
    int h, w, n, l, d, x, y, a[101][101]= {};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    int i, j;
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &y, &x);
        for(j=0; j<l; j++)
        {
            if(d==0)
                a[x+j][y]= 1;
            else
                a[x][y+j]= 1;
        }
    }

    for(j=1; j<=h; j++)
    {
        for(i=1; i<=w; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h> //98

int main()
{
    int a[12][12]= {}, x= 2, y= 2, i, j;
    for(j=1; j<11; j++)
        for(i=1; i<11; i++)
            scanf("%d", &a[i][j]);
    while(1)
    {
        if(a[x][y]==2)
        {
            a[x][y]= 9;
            break;
        }
        else if(a[x][y+1]== 1 && a[x+1][y]== 1)
        {
            a[x][y]= 9;
            break;
        }
        else if(a[x+1][y]==1)
        {
            a[x][y]= 9;
            y++;
        }
        else
        {
            a[x][y]= 9;
            x++;
        }
    }

    for(j=1; j<11; j++)
    {
        for(i=1; i<11; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h> //99: ´ä 77

int main()
{
    printf("99");

    return 0;
}
*/
/*
#include <stdio.h> //100

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a+b);

    return 0;
}
*/
