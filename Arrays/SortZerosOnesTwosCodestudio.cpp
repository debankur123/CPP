#include<bits/stdc++.h>
using namespace std;

//using a vector
vector<int> sortZerosOnesTwos(vector<int> &nums){
  vector<int> outputNums;
  for (int i = 0; i < nums.size(); ++i)
  {
    if(nums[i]==0){
      outputNums.push_back(nums[i]);
    }
  }
  for (int i = 0; i < nums.size(); ++i)
  {
    if(nums[i]==1){
      outputNums.push_back(nums[i]);
    }
  }
  for (int i = 0; i < nums.size(); ++i)
  {
    if(nums[i]==2){
      outputNums.push_back(nums[i]);
    }
  }
  return outputNums;
}
// using count sort 
void sort012(int *nums,int n){
  int count0=0; int count1=0; int count2=0;
  for(int i=0;i<n;i++){
    if(nums[i]==0){
      count0++;
    }
    else if(nums[i]==1){
      count1++;
    }
    else if(nums[i]==2){
      count2++;
    }
  }
  int index=0;
  for(int i=0;i<count0;i++){
    nums[index++]=0;
  }
  for (int i = 0; i < count1; ++i)
  {
    nums[index++]=1;
  }
  for (int i = 0; i < count2; ++i)
  {
    nums[index++]=2;
  }
}
// using Dutch National Flag Algorithm
void sort012DNF(int nums[], int n)
{
  int low=0;
  int mid=0;
  int high = n-1;
  while(mid<=high){
    if(nums[mid]==0){
      swap(nums[low],nums[mid]);
      low++;
      mid++;
    }
    else if(nums[mid]==1){
      mid++;
    }
    else{
      swap(nums[mid],nums[high]);
      high--;
    }
  }
}
int main(){
  int n;
  cin >> n;
  //vector<int> vec(n);
  int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  //vector<int> result = sortZerosOnesTwos(vec);
  sort012DNF(nums, n);
  for (int i = 0; i < n; ++i) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
