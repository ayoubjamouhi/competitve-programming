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
    int n, res=0, l=0;
    cin >> n;

    for (int i = 0, ai; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ai;
            if (ai == 1)
                ++l;
        }
        if(l>=2)
            ++res;
        l=0;
    }
    cout << res;
}
int main()
{
    solve();
    return 0;
}
