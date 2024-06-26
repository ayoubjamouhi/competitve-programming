#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve_1() {
    int n, c[3] = {};
    // cin >> n;
    //++n;
    // cout << n;

    for (int i = 0, ans; i < 3; i++)
    {
        cin >> ans;
        cout << ans << " , " << c[ans] << endl;
        c[ans] = c[ans] + 1;
        cout << "c ans: " << c[ans] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << c[i];
    }
}
inline std::string trim(std::string& str)
{
    str.erase(str.find_last_not_of(' ')+1);         //suffixing spaces
    str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
    return str;
}
void solve_2() {
    string s;

    cin >> s;

    s=trim(s);
    
    cout << s;
}
int main()
{
    solve_2();
    return 0;
}
