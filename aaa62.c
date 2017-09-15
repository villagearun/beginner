#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}

long long convert(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
