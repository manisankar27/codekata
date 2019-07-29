#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%llu",f);
    return 0;
}
