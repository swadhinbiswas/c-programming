#include<stdio.h>
int main()
{
     int a,b,c,d,e,f;
     scanf("%d",&a);
 b=a%3600;
 c=a/3600;
    d=b/60;
    e=b%60;
    printf("%d:%d:%d\n",c,d,e);
}
