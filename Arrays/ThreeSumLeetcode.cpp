#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
void twoSum(vector<int> &nums,int target,int i,int j){
    while(i<j){
        if(nums[i]+nums[j] > target){
            j--;
        }
        else if(nums[i]+nums[j]<target){
            i++;
        }
        else{
            while(i<j && nums[i]==nums[i+1]){
                i++;
            }
            while(i<j && nums[j]==nums[j-1]){
                j--;
            }
            result.push_back({-target,nums[i],nums[j]});
            i++;
            j--;
        }
    }
}

vector<vector<int>> threeSum(vector<int> &nums){
    int n = nums.size();
    if(n<3){
        return {};
    }
    result.clear();
    //Sort the vector
    sort(nums.begin(),nums.end());
    for(int i=0;i<=n-3;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int n1 = nums[i];
        int target = (-n1);
        twoSum(nums,target,i+1,n-1);
    }
    return result;
}

int main() {
    int inputSize;
    //cout << "Enter the size of the array: ";
    cin >> inputSize;
    vector<int> nums(inputSize);
    //cout << "Enter the elements of the array: ";
    for (int i = 0; i < inputSize; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result = threeSum(nums);
    if (result.empty()) {
        cout << "No triplets found that sum up to zero." << endl;
    } else {
        cout << "Triplets that sum up to zero are: " << endl;
        for (const auto &triplet : result) {
            for (int num : triplet) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
}