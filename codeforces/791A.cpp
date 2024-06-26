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
    int a, b, y = 0;
    cin >> a >> b;
    a = a * 3;
    b = b * 2;
    while (a < b)
    {
        ++y;
        a = a * 3;
        b = b * 2;
    }
    cout << y;
}
int main()
{
    solve();
    return 0;
}
