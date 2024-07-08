#include<bits/stdc++.h>
using namespace std;


int binarySearch(int nums[],int n,int key){
  int start = 0;
  int end = n-1;
  int mid = start + ((end-start)/2); // to handle interger overflow
  while(start <= end){
    if(nums[mid]==key){
      return mid;
    }
    else if(nums[mid]>key){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
    //re calculate mid because start and end has been updated
    mid = start + ((end-start)/2);
  }
  return -1;
}


int main(){
  int n;
  cin >> n;
  int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int key;
  cin >> key;
  int result = binarySearch(nums,n,key);
  cout << result << endl;
  return 0;
}
