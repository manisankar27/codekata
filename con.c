#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if((n=='a'||n=='e'||n=='i'||n=='o'||n=='u')||(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'))
    {
    printf("vowels");
    }
    else if((n>=65&&n<=90)||(n>=97&&n<=122))
    {
    printf("consonant");
    }
    else
    {
        printf("invaild");
    }
    return 0;
}
