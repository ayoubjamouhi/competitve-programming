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
    string n1, n2;
    cin >> n1 >> n2;
    int l = 0;
    for (int i = 0; i < n1.length(); i++)
    {
        if (tolower(n1[i]) < tolower(n2[i]))
        {
            l = -1;
            break;
        }
        else if (tolower(n1[i]) > tolower(n2[i]))
        {
            l = 1;
            break;
        }
    }

    cout << l;
}
int main()
{
    solve();
    return 0;
}
