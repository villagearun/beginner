#include<stdio.h>
int main()
{
char ch;
unsigned int long wc;
wc=0;
while((ch=getc(stdin))!=EOF)
{
 if (ch==' ' || ch=='\n')
 {
 ++wc;
 }
} 
printf( "%lu",wc);
return 0;
}
