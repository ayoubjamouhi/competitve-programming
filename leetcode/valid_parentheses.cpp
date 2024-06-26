#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stack>

using namespace std;
#define endl "\n"
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

bool myfun(string s)
{
  stack<char> mystack;
  for (char c : s)
  {
    if (c == '(' || c == '{' || c == '[')
    {
      mystack.push(c);
    }
    else
    {
      if (mystack.empty() ||
          (c == ')' && mystack.top() == '(') || 
          (c == '}' && mystack.top() == '{') ||
          (c == ']' && mystack.top() == '[') 
          )
      {
        return false;
      }
      mystack.pop();
    }
  }
    return mystack.empty();
}
int main()
{
  // cout << 4 % 2;
  string s = "[[[]";
  bool j = myfun(s);
  cout << "total " << j;
  return 0;
}
