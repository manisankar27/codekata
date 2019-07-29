#include<stdio.h>
int main()
{
    int n,m,r,sum=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(m==sum)
    printf("yes");
    else
    printf("no");
    return 0;
}
