#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> rotateArrayByOnePlace(vector<int> &nums){
    int temp=nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1]=nums[i];
    }
    nums[nums.size()-1]=temp;
    return nums;
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
    vector<int> result = ob.rotateArrayByOnePlace(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
  }
  return 0;
}
