#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, n1 = 0, n2 = 1, term = 0;
    cout << "Enter the number of terms: " << endl;
    cin >> n;
    cout << "Series is: " << endl;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << n1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << n2 << " ";
            continue;
        }
        term = n1 + n2;
        n1 = n2;
        n2 = term;
        cout << term << " ";
    }

    return 0;
}