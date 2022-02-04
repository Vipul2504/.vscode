#include <stdio.h>
int fact(n);
int main()
{
    int n, f;
    printf("Enter a number whose factorial you want: ");
    scanf("%d", &n);
    f = fact(n);
    printf("the factorial is=%d", f);
}
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}