#include<bits/stdc++.h>
using namespace std;

void explainVector();
int main(){
	explainVector();
	return 0;
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

	cout << "Size of the array is : " << v.size() << endl;
	cout << "Element at index 2 is-> " << v.at(2) << endl;

	// Printing front and back element in array
	cout << "front element -> " << v.front() << endl;
	cout << "back element -> " << v.back() << endl;

	// Before pop : pop means eliminating the last element from array
	cout << "Before pop " << endl;
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	v.pop_back();
	//after poping out
	cout << "After pop " << endl;
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}

}