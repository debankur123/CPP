#include<bits/stdc++.h>
using namespace std;

int sumOfArrayElements(int nums[],int inputSize){
    int arraySum = 0;
    for(int index=0;index<inputSize;index++){
        arraySum = arraySum + nums[index];
    }
    return arraySum;
}

int main(){
    int size;
    cin>>size;
    int nums[100000];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout << "The sum of the array elements is " << sumOfArrayElements(nums,size) << endl;
    return 0;
}