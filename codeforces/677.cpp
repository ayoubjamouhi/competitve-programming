#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n, h, a[n];
    int w = 0;
    cin >> n >> h;
    for (int i = 0, ai; i < n; i++)
    {
        cin >> ai;
        if (ai > h)
        {
            w += 2;
        }
        else
            w += 1;
    }
    cout << w;
}
int main()
{
    solve();
    return 0;
}
