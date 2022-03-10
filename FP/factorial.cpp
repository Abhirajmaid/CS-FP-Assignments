#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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
    cout << "Enter a Your fav. integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}
