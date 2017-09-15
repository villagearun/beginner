#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n,convert(n));
    return 0;
}

int convert(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
