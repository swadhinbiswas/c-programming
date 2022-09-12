#include<stdio.h>
int main()
{
    int a,b,c;
   int  count=1;
    scanf("%d",&c);
    for(a=0;a<c;a++)
    {
        for(b=0;b<=c;++b)
        {
            if(b>c-a-1)
            {
                printf("*");
                
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
