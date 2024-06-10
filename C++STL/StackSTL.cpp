#include<bits/stdc++.h>
using namespace std;

void ExplainStack();
int main(){
	ExplainStack();
	return 0;
}
// This is a LIFO data structure that is last in first out 
void ExplainStack(){
	stack<string> st;
	st.push("Debankur");
	st.push("Ankita");
	st.push("Bikash");
	cout << "The top element in the stack is ->" << st.top() << endl;

	st.pop();
	cout << "Now the top element in the stack is ->" << st.top() << endl;
 

}