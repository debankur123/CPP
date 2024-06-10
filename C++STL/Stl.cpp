#include<bits/stdc++.h>
using namespace std;

void explainPair();
void explainVector();
int main(){
	//explainPair();
	explainVector();
	return 0;
}
void explainPair(){
	pair<int,int> p = {1,3}; // we want to store a pair containing of 2 integers
	cout << p.first << " " << p.second << endl; // we can access 1st and second value individually using the first and second methods

	// Suppose we have been asked to store  more than 2 no numbers in a pair . Then we can nest the pair like this below

	pair<int,pair<int,int>> p1 = {1,{2,3}};
	cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl; 

	// Now a pair can contain an array .
	pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
	cout << arr[0].first << endl;
}

void explainVector(){
	vector<int> v; // allocated capacity of 0
	cout << "Capacity is -> " << v.capacity() << endl;

	v.push_back(1);
	cout << "Capacity is -> " << v.capacity() << endl;

	v.push_back(2);
	cout << "Capacity is -> " << v.capacity() << endl;

	v.push_back(3);
	cout << "Capacity is -> " << v.capacity() << endl; // the capacity is doubled!

	cout << "Size of the array is -> " << v.size() << endl;
}


