#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

int longestConsecutive(vector<int> &nums)
{
  sort(nums.begin(), nums.end());

  cout << "Sorted \n";
  for (auto x : nums)
    cout << x << " " << endl
         << endl;
  int p = 1, j = 1;
  vector<int> n;
  if (nums.size() > 0)
  {
    for (int i = 0; i < nums.size() - 1; i++)
    {
      // cout << nums[i] << "_" << nums[i + 1] << endl;
      if (nums[i + 1] == nums[i] + 1)
      {
        j++;
        if (j != 1)
          n.push_back(j);
        // p = nums[i];
      }
      else
      {
        cout << "here " << i << " " << nums[i] << endl;
        n.push_back(j);
        j = 1;
      }
    }
  }
  else
    return 0;

  for (auto x : n)
    cout << "n: " << x << " " << endl;
  int max = 1;
  if (n.size() > 0)
    max = *max_element(n.begin(), n.end());

  return max;
}
int main()
{
  // vector<int> nums1 = {9,1,4,7,3,-1,0,5,8,-1,6};
  vector<int> nums1 = {0};
  vector<int> &nums = nums1;

  int j = longestConsecutive(nums);
  cout << "total " << j;
  return 0;
}
