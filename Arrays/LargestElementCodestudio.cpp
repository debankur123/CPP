#include <bits/stdc++.h>
using namespace std;

int largestElement(int *nums,int size){
  int maxElement = nums[0];
  for(int i=1;i<size;i++)
  {
    if(nums[i]>maxElement)
    {
      maxElement = nums[i];
    }
  }
  return maxElement;
}

int main(){
  int n;
  cin >> n;
  int nums[n];
  for(int x=0;x<n;x++)
  {
    cin >> nums[x];
  }
  int result = largestElement(nums,n);
  cout << result << endl;
  return 0;
}
