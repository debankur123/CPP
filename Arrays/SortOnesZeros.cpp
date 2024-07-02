#include<bits/stdc++.h>
using namespace std;
 // 0 1 1 1 0
void sortOnesZeros(int nums[],int n){
	int start = 0,end = n-1;
	while(start < end){
		if(nums[start]==0 && start < end){
			start++;
		}
		else if(nums[end]==1 && start<end){
			end--;
		}
		else if(nums[start]==1 && nums[end]==0 && start<end){
			swap(nums[start],nums[end]);
			start++;
			end--;
		}
	}
}

void printArray(int nums[],int n){
	for(int i=0;i<n;i++){
		cout << nums[i] << " ";
	}
}

int main(){
	int inputSize;
	cin >> inputSize;
	int nums[inputSize];
	for(int j=0;j<inputSize;j++){
		cin >> nums[j];
	}
	sortOnesZeros(nums,inputSize);
	printArray(nums,inputSize);
}