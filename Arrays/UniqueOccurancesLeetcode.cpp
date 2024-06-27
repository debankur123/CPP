#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurances(int nums[],int inputSize){
    vector<int> frequency(2001,0);
    for(int i=0;i<inputSize;i++){
        frequency[nums[i]+1000]++;
    }
    sort(begin(frequency),end(frequency));
    for(int j=1;j<2001;j++){
        if(frequency[j]!=0 && frequency[j]==frequency[j-1]){
            return false;
        }
    }
    return true;
}
// [1,2,2,3,3,3] 1 -> 2,2-> 2,3->3
int main(){
    int inputSize;
    cin>>inputSize;
    int nums[inputSize];
    for(int i=0;i<inputSize;i++){
        cin>>nums[i];
    }
    bool result = uniqueOccurances(nums,inputSize);
    //cout << result << endl;
    if(result){
        cout << "Unique Occurences does exists" << endl;
    }
    else{
        cout << "Unique Occurences does not exists" << endl;
    }
}