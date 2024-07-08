#include<bits/stdc++.h>
using namespace std;

int findDuplicateElement(vector<int> &nums,int inputSize){
    int temp=0;
    sort(begin(nums),end(nums));
    for(int i=0;i<inputSize;i++){
        if(nums[i]==nums[i+1]){
            temp = nums[i];
        }
    }
    return temp;
}
int findDuplicateElementUsingXOR(vector<int> &vec){
    int resultant=0;
    // Use XOR 
    for(int i=0;i<vec.size();i++){
        resultant = resultant^vec[i];
    }
    // Use XOR from 1 to N-1 to cancel out all terms except the repeating one.
    for(int j=1;j<vec.size();j++){
        resultant = resultant^j;
    }
    return resultant;
}

int main(){
    int inputSize;
    cin>>inputSize;
    vector<int> vec(inputSize);
    for(int i=0;i<inputSize;i++){
        cin>>vec[i];
    }
    int duplicateElement = findDuplicateElementUsingXOR(vec);
    if(duplicateElement != 0)
        cout << "Duplicate element is : " << duplicateElement << endl;
    else
        cout << "Duplicate element not found! " << endl;
}
