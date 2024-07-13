#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeDuplicatesinSortedArray(vector<int> &nums){
    if(nums.size()==0){
        return 0;
    }
    int count=1;
    for(int index=1;index<nums.size();index++){
        if(nums[index] != nums[index-1]){
            count++;
        }
    }
    return count;
  }
  int removeDuplicatesinSortedArrayOptimal(vector<int> &nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
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
    int output = ob.removeDuplicatesinSortedArrayOptimal(nums);
    cout <<output<< endl;
  }
  return 0;
}
