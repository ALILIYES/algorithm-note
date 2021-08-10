#include<stack>
#include<cstdio>
using namespace std;
int main(){
	stack<int> st;
	for(int i=1;i<=5;i++){
		st.push(i);
	}
	printf("%d\n",st.top());
	//Çå¿ÕÕ»²Ù×÷  
	while(!st.empty()){
		st.pop();
	}
} 
