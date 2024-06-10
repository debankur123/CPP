#include<bits/stdc++.h>
using namespace std;
void dequeue();
int main(){
	dequeue();
	return 0;
}

void dequeue(){
	deque<int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_front(3);
	d.push_front(4);

	for(int i:d){
		cout << i<<" ";
	}
	cout << endl;
	//d.pop_front();
	cout << "Print element at 2-> " << d.at(2)<< endl;

	cout << "Front element-> " << d.front()<< endl;
	cout << "Back element-> " << d.back()<< endl;

	cout << "Empty or not-> " << d.empty()<< endl;
	cout << "before erase-> " << d.size()<< endl;
	d.erase(d.begin(),d.begin()+1);
	cout << "After erasing element-> " << d.size()<< endl;
	for(int i:d){
		cout << i << " ";
	}
	cout << endl;
}
