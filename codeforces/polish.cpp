#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;
#define endl "\n"
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

int myfun(vector<string> &tokens)
{
  stack<int> mystack;

  int a, b;
  int i = 0;
  int first;
  for (string t : tokens)
  {
    cout << "t " << t << endl;
    if (t == "+" || t == "*" || t == "/" || t == "-")
    {
      while (!mystack.empty() && i < 2)
      {
        if (i == 0)
        {
          a = mystack.top();
          mystack.pop();
        }
        else if (i == 1)
        {
          b = mystack.top();
          mystack.pop();
        }
        i++;
      }
      if (t == "+")
      {
        cout << "a: " << a << " b: " << b << endl;
        first = a + b;
      }
      else if (t == "*")
      {
        first = a * b;
      }
      else if (t == "/")
      {
        cout << "a: " << a << " b: " << b << endl;
        first = floor(b / a);
      }
      else if (t == "-")
      {
        first = b - a;
      }
      i = 0;
      cout << "firs: " << first << endl;
      mystack.push(first);
      cout << "top: " << mystack.top() << " size: " << mystack.size() << endl;
      // int total;
      // if (first >= 0)
      // {
      //   total = a + first;
      //   mystack.pop();
      //   mystack.push(total);
      // }
      // else
      // {
      //   first = a;
      //   mystack.pop();
      // }
    }
    else
    {
      mystack.push(stoi(t));
    }
  }
  cout << mystack.size() << endl;
  cout << "a: " << a << " b :" << b << endl;
  cout << mystack.top() << endl;
  return mystack.top();
}
int main()
{
  vector<string> tokens = {"4", "13", "5", "/", "+"};
  int j = myfun(tokens);
  cout << "total " << j;
  return 0;
}
