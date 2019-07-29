#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=n;i<=k;i++)
    if(i%2==1)
    printf("%d",i);
    return 0;
}
