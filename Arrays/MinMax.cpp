#include<bits/stdc++.h>
using namespace std;
int findMax(int nums[], int n){
    int max = INT_MIN;
    for(int index=0;index<n;index++){
        if(nums[index]>max){
            max = nums[index];
        }
    }
    return max;
}
int findMin(int nums[], int n){
    int min = INT_MAX;
    //int minValue = INT32_MAX;
    for(int index=0;index<n;index++){
        if(nums[index]<min){
            min = nums[index];
        }
        //minValue = min(minValue,nums[index]);
    }
    return min;
}
int main(){
    int size;
    cin >>size;
    int nums[10000];
    for(int i=0;i<size;i++){
        cin >>nums[i];
    }
    cout << "Minimum value in the array is : " << findMin(nums,size) << endl;
    cout << "Maximum value in the array is : " << findMax(nums,size) << endl;
    return 0;
}

