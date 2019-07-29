#include<stdio.h>
int main()
{
    int n,i,k,t=0;
    scanf("%d",&n);
    scanf("%d",&k);
    while(n<k)
    {
        t=0;
        for(i=2;i<k/2;i++)
        {
            if(n%2==0)
            {
            t=1;
            break;
        }
    }
   if(t==0)
   printf("%d",n);
   n++;
    }
    return 0;
}
