#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &nums1,vector<int> &nums2){
    vector<int> answer;
    sort(begin(nums1),end(nums1));
    sort(begin(nums2),end(nums2));
    int n=nums1.size();
    int m=nums2.size();
    int i=0; int j=0;
    while (i<n && j<m)
    {
        if(nums1[i]==nums2[j]){
            if(answer.empty() || answer.back() != nums1[i]){
                answer.push_back(nums1[i]);
            }
            i+=1;
            j+=1;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return answer;
    
}

int main() {
    cout << "Enter size of first array: " << endl;
    int inputSize1;
    cin >> inputSize1;
    vector<int> vec1(inputSize1);
    cout << "Enter elements of first array: " << endl;
    for (int i = 0; i < inputSize1; i++) {
        cin >> vec1[i];
    }
    cout << "Enter size of second array: " << endl;
    int inputSize2;
    cin >> inputSize2;
    vector<int> vec2(inputSize2);
    cout << "Enter elements of second array: " << endl;
    for (int i = 0; i < inputSize2; i++) {
        cin >> vec2[i];
    }
    vector<int> output = findIntersection(vec1, vec2);
    if (output.empty()) {
        cout << "The intersections are : -1" << endl;
    }
    else {
        cout << "The intersection of array elements are: ";
        for (int i = 0; i < output.size(); i++) {
            cout << output[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}