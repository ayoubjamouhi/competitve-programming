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

vector<string> myfun(int n)
{
  stack<string> mystack;
   
  for(int i=0;i<n;i++) {
    mystack.push("(");
  }
}
int main()
{
  int n =1;
  vector<string> j = myfun(n);
  cout << "total " << j;
  return 0;
}
