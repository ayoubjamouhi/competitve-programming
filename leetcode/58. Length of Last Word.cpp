#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

vector<int> bubbleSort1(vector<int> arr)
{
    int per = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                per = arr[j + 1];
                arr[j] = arr[j + 1];
                arr[j + 1] = per;
            }
        }
    }
    return arr;
}
int main()
{
    // vector<int> v = {1, 2, 8, 2, 5, 10};
    // vector<int> n = bubbleSort1(v);
    // for (int i : n)
    //     std::cout << i << ' ';

    // stringstream ss(s);  
    return 0;
}
