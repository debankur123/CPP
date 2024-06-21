#include<bits/stdc++.h>
using namespace std;

bool search(int nums[],int inputSize,int key){
    for(int idx=0;idx<inputSize;idx++){
        if(nums[idx] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cin >>size;
    int nums[100000];
    for(int i=0;i<size;i++){
        cin >>nums[i];
    }
    int key;
    cout << "Enter the key to search: " << endl;
    cin >> key;
    bool found = search(nums,size,key);
    if(found){
        cout << "Key found" << endl;
    }
    else{
        cout << "Key not found" << endl;
    }
    return 0;
}
