#include <stdio.h>
int main()
{

    int n, i;
    int n1 = 0, n2 = 1;
    int Term;
    Term = n1 + n2; // term =1

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Series is: %d %d ", n1, n2);

    for (i = 3; i <= n; ++i)
    {
        printf("%d ", Term); // term is printing
        n1 = n2;
        n2 = Term;
        Term = n1 + n2;
    }
    return 0;
}