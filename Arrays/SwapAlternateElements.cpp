#include<bits/stdc++.h>
using namespace std;

void printArray(int nums[],int inputSize){
    for(int i=0;i<inputSize;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
void swapAlternateElements(int nums[],int n){
    for(int index=0;index<n;index=index+2){
        if(index+1 < n){
            swap(nums[index],nums[index+1]);
        }
    }
}
void swapAlternateElementsUsingThirdVariable(int nums[],int n){
    int temp;
    for (int index = 0; index < n; index+=2)
    {
       if(index+1<n){
        temp = nums[index+1];
        nums[index+1] = nums[index];
        nums[index] = temp;
       }
    }
    
}
int main(){
    int inputSize;
    cin>>inputSize;
    int nums[inputSize];
    for(int i=0;i<inputSize;i++){
        cin>>nums[i];
    }
    swapAlternateElementsUsingThirdVariable(nums,inputSize);
    printArray(nums,inputSize);
    return 0;
}