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
    int n, a = 0, d = 0;
    string s;

    cin >> n >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            ++a;

        else if (s[i] == 'D')
            ++d;
    }
    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}
int main()
{
    solve();
    return 0;
}
