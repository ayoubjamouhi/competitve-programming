#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve_1()
{
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

void solve_2()
{
    string s;

    cin >> s;

    cout << s[0];
}
inline std::string trim(std::string &str)
{
    str.erase(str.find_last_not_of(' ') + 1); // suffixing spaces
    str.erase(0, str.find_first_not_of(' ')); // prefixing spaces
    return str;
}
int lengthOfLastWord(string s)
{

    vector<string> arr;
    int start = 0, end = 0;
    s = trim(s);
    // for(int i=1;i<s.length();i++) {
    //     if(s[i] == ' ') {
    //         arr.push_back(s.substr(start, i));
    //         start = i+1;
    //     }
    // }
    int i = 0;
    s = s+' ';
    while (i < s.length())
    {
        if (s[i] == ' ')
        {
            arr.push_back(s.substr(start, i - start));
            start = i + 1;
        }
        i++;
    }
    for(int i=0;i<arr.size();i++) {
        cout << arr[i] << endl;
    }
    // "   fly me   to   the moon  "
    return arr[arr.size() - 1].length();
}
int main()
{
    int x = lengthOfLastWord("   fly me   to   the moon  ");
    cout << x;
    return 0;
}
