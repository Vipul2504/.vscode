#include <stdio.h>
void sum(int, int);
void main()
{
    int a, b;
    printf("\nWe are going to calcultae");
    printf("Enter a two number: ");
    scanf("%d %d", &a, &b);
    sum(a, b);

    void sum(int a, int b)
    {
        printf("\n the sum is %d");
    }
}
