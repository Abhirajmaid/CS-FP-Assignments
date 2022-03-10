#include <stdio.h>

int factorial(int n)
{
    if (n > 1)
    {
        int a = n * factorial(n - 1);
        return a;
    }
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter a Your fav. integer: ");
    scanf("%d", &n);
    printf("Factorial of a Given Number is = %d", factorial(n));
    return 0;
}
