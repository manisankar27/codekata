#include<stdio.h>
int main()
{
    int n,r,sum=0,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(m==sum)
    printf("yes");
    else
    printf("No");
    return 0;
}
