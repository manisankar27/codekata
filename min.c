#include<stdio.h>
int main()
{
    int a[100],n1,n2=1,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=a[i];
    for(i=1;i<n;i++)
    {
       if(a[i]<n1)
       {
           n1=a[i];
           n2=i+1;
       }
       
    }
    printf("%d",n1);
    return 0;
}
