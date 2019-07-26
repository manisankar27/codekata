#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if((n>=65&&n<=90)||(n>=97&&n<=122))
    {
    printf("alphabet");
    }
    else
    {
        printf("no");
    }
    return 0;
}
