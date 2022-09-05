#include<stdio.h>
int main()
{
char s[100];
int i = 0;
printf(" input your letter/sentance/word /max 100 ");
scanf("%[^\n]",s);
if(s[i]>='a' && s[i]<='z'){
for(i=0;s[i]!=0;i++)
{
s[i]=s[i]-32;
}
printf("upper case of your input is : ");
puts(s);
}
else if(s[i]>='A' && s[i]<= 'Z')
{
for(i=0;s[i]!=0;i++)
{
s[i]=s[i]+32;
}
printf(" lower case is :");
puts(s);
}
return 0;
}
