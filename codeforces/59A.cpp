
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    string s;
    cin >> s;
    int nbr_upper = 0;
    for (int i; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            ++nbr_upper;
        }
    }
    if (nbr_upper > ceil(s.length() / 2))
    {
        for (auto elem : s)
            cout << toupper(elem, s);
    }
    else
    {
        for (auto elem : s)
            cout << tolower(elem, s);
    }
}
int main()
{
    solve();
    return 0;
}
