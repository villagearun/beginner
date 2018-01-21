#include<stdio.h>
#include<string.h>
int main()
{
char s1[20];
gets(s1);
if(s1==strrev(s1))
{
printf("\nYES");
}
else
{
printf("\nNO");
}
return 0;
}
