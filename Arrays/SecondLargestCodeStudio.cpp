#include<bits/stdc++.h>
using namespace std;

// [1,2,4,7,7,5]
// Better Approach T.C => O(2N)
int secondLargestElement(int *nums,int n){
  int maxElement = nums[0];
  for(int index=0;index<n;index++){
    if(nums[index]>maxElement){
      maxElement = nums[index];
    }
  }
  // Now we calculate the second largest as we have found the largest by checking that present element is greater than secondMaxElement and is not largest
  int secondMaxElement=-1000000000;
  for(int index=0;index<n;index++){
    if(nums[index]>secondMaxElement && nums[index]!=maxElement){
      secondMaxElement=nums[index];
    }
  }
  return secondMaxElement;
}

// Optimal Approach T.C => O(N)
int secondLargestElementOptimal(int *nums,int n){
  int largest = nums[0];
  int secondLargest=INT_MIN; // INT_MIN for duplicate Negative numbers
  for(int index=1;index<n;index++){
    if(nums[index]>largest){
      secondLargest=largest;
      largest=nums[index];
    }
    else if(nums[index]<largest && nums[index]>secondLargest){
      secondLargest=nums[index];
    }
  }
  return secondLargest;
}
// Optimal Approach for Second Smallest element T.C => O(N)
int secondSmallestElement(int *nums,int n){
  int smallest=nums[0];
  int secondSmallest = INT_MAX;
  for(int index=1;index<n;index++){
    if(nums[index] < smallest){
      secondSmallest = smallest;
      smallest = nums[index];
    }
    else if(nums[index]!=smallest && nums[index]<secondSmallest){
      secondSmallest=nums[index];
    }
  }
  return secondSmallest;
}

int main(){
  int n;
  cin >> n;
  int nums[n];
  for(int index=0;index<n;index++){
    cin >> nums[index];
  }
  int result = secondLargestElementOptimal(nums,n);
  cout << result << endl;
  int secondSmallestOutput = secondSmallestElement(nums,n);
  cout<<secondSmallestOutput<<endl;
  cout << endl;
  return 0;
}
