#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void rotate(vector<int> &nums,int k){
        int n = nums.size();
        k = k%n;
        vector<int> temp = copyElementsToTemp(nums,k);
        for(int index=k;index<nums.size();index++){
            nums[index-k]=nums[index];
        }
        for(int index=k;index<k;index++){
            nums[index]=nums[index-(nums.size()-k)];
        }
        printArray(nums);
    }
    vector<int> copyElementsToTemp(vector<int> &original,int d){
        vector<int> temp(d);
        for(int index=0;index<d;index++){
            temp[index]=original[index];
        }
        return temp;
    }
    void printArray(vector<int> &nums){
        for(int index=0;index<nums.size();index++){
            cout<<nums[index]<<" ";
        }
        cout << endl;
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
    int k;
    cin >> k;
    Solution ob;
    ob.rotate(nums,k);
    cout << " " << endl;
  }
  return 0;
}
