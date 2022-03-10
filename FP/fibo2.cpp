#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, n;
    int n1 = 0, n2 = 1;
    int Term = n1 + n2; // term =1
    cout << "Enter the number of terms: " << endl;
    cin >> n;
    cout << "Series is: " << endl;
    cout << n1 << ", " << n2 << ", ";

    for (i = 3; i <= n; ++i)
    {
        cout << Term << ", ";
        n1 = n2;
        n2 = Term;
        Term = n1 + n2;
    }

    return 0;
}