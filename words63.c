#include<stdio.h>
int main()
{
char s[50];
int count=0,i;
scanf("%[^\n]s",s);
for(i=0;s[i]!=0;i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("\n WORDS=%d",count+1);
return 0;
}
