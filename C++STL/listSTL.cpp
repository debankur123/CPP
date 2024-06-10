#include<bits/stdc++.h>
using namespace std;

void explainList();
int main(){
	explainList();
	return 0;
}

void explainList(){
	list<int> lst;
	lst.push_back(1);
	lst.push_front(3);
	lst.push_back(4);
	for(int i:lst){
		cout <<i<< " ";
	}
	cout<< endl;
	lst.erase(lst.begin());
	cout<<"After erase" << endl;
	for(int i:lst){
		cout <<i<< " ";
	}
	cout << endl;

	cout<< "Size of the list is now ->" << lst.size() << endl;
}