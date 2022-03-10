#include <stdio.h>
int main()
{

    int n, n1 = 0, n2 = 1, term = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Series is: ");
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            printf("%d ", n1);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", n2);
            continue;
        }
        term = n1 + n2; // term = 1
        n1 = n2;        // switching terms
        n2 = term;
        printf("%d ", term);
    }

    return 0;
}