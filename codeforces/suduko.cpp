#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);


int main() {
    int number;
    // vector<int> num (1,2,3,4);
      vector<int> vector1 = {1, 2, 3, 4, 5};
    for (const int& i : vector1) {
        cout << i << "  ";
    }
    vector1.push_back(6);
    vector1.push_back(7);
    for (const int& i : vector1) {
        cout << i << "  ";
    }
    cout << endl;
    cout << vector1.at(0) << vector1[0]<< endl;
    vector1.at(0) = 10;
    for (const int& i : vector1) {
        cout << i << "  ";
    }
    cout << endl;
    vector1.pop_back();
    for (int i : vector1) {
        cout << i << "  ";
    }
    return 0;
}
