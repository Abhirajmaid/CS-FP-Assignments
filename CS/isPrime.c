#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        printf("Given no. is Prime\n");
    }
    else
        printf("Given no. is not Prime\n");
    return 0;
}