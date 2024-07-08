#include<bits/stdc++.h>
using namespace std;
//Brute force approach O(N^2)
vector<int> twoSum(vector<int> &nums,int target){
    vector<int> result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                break;
            }
        }
    }
    sort(result.begin(),result.end());
    return result;
}
// Better approach using map O(N)
vector<int> twoSumUsingMap(vector<int> &nums,int target){
    int n = nums.size();
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int remaining = target-nums[i];
        if(mp.find(remaining) != mp.end()){
            return {mp[remaining],i}; // past index,current index is being returned because it's present in map
        }
        mp.insert({nums[i],i}); // when not present in map
    }
    return {};
}

int main() {
    int input;
    cout << "Enter the number of elements: ";
    cin >> input;
    vector<int> vec(input);
    cout << "Enter the elements: ";
    for (int i = 0; i < input; i++) {
        cin >> vec[i];
    }
    cout << "Enter target: ";
    int target;
    cin >> target;
    vector<int> output = twoSumUsingMap(vec, target);
    if (!output.empty()) {
        cout << "Two sum indices of the array are: " << output[0] << " " << output[1] << endl;
    } 
    else {
        cout << "No two sum solution found" << endl;
    }
    return 0;
}
