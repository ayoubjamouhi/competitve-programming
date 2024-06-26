#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{

    // Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm
    // divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The
    // algorithm repeats this, until n is one. For example, the sequence for n = 3 is as follows
    /// 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
    // 3 10 5 16 8 4 2 1
    int i = 0, n;
    cin >> n;
    cout << n << " ";
    i=n;
    while (i != 1)
    {
        if (i % 2 == 0)
        {
            i = i / 2;
            cout << i << " ";
        }
        else
        {
            i = i * 3 + 1;
            cout << i << " ";
        }
    }
    return 0;
}