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
    string n;
    cin >> n;
    int l = 1;
    string temp = "";
    for (int i = 0; i < n.length(); i++)
    {
        if (temp.find(n[i]) == string::npos)
        {
            temp += n[i];
        }
    }

    if (temp.length() % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
int main()
{
    solve();
    return 0;
}
