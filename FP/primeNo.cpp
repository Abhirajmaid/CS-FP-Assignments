#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}