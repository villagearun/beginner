#include<stdio.h>
void main()
{
int i=0;
char s[20];
printf("\n Enter string:");
gets(s);
s[0]=s[0]-32;
while(s[i]!=\0')
{
if(s[i]==' ')
{
s[i+1]=s[i+1]-32;
}
i++;
}
printf("\n %s",s);
}
