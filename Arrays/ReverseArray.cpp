#include<bits/stdc++.h>
using namespace std;

void reverseArrayUsingBackwardCount(int nums[],int inputSize){
    for(int i=inputSize-1;i>=0;i--){
        cout<<nums[i]<<" ";
    }
}
void printArray(int nums[],int inputSize){
    for(int i=0;i<inputSize;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void reverseUsingSwap(int nums[],int inputSize){
    int start = 0;
    int end = inputSize-1;
    while(start <= end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}
int main(){
    int size;
    cin>>size;
    int nums[100000];
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    reverseUsingSwap(nums,size);
    printArray(nums,size);
    cout<<endl;
    return 0;
}