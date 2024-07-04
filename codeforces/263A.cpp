#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, ii = 0, jj = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1, ai; j <= 5; j++)
        {
            cin >> ai;
            if (ai == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
                break;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}
