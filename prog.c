#include <stdio.h>

int main()
{
    int n,b;
    int a,d,s;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&d);
    s=(2*a)+(n-1)*d;
    b=(float)n/2*s;
    printf("%d",b);
    return 0;
}
