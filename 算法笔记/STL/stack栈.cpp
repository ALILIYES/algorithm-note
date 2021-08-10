//栈 先进后出 
#include<stack>
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main(){
	stack<int> st;
	for(int i=1;i<=5;i++){
		st.push(i);
	}
	printf("%d\n",st.top());
	st.pop();
	printf("%d\n",st.top());
	//st.empty();
	//st.size();
	return 0;
}
