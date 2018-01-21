#include<stdio.h>
int main()
{
char s[100];
int count=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.')
count++;
}
printf("\n LINES=%d",count);
return 0;
}
