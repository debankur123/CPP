#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int arraySortedOrNot(vector<int> &arr)
  {
    for (int index = 1; index < arr.size(); index++)
    {
      if (arr[index] < arr[index - 1])
      {
        return 0;
      }
    }
    return 1;
  }
};

int main()
{
  string ts;
  getline(cin, ts);
  int t = stoi(ts);
  while (t--)
  {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> nums;
    int num;
    while (ss >> num)
    {
      nums.push_back(num);
    }
    Solution ob;
    int ans = ob.arraySortedOrNot(nums);
    cout << ans << endl;
  }
  return 0;
}
