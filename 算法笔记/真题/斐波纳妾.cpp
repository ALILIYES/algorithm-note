#include<iostream>
#include<algorithm> 
#include<string.h>
using namespace std;
//int main(){
//	long long a=1,b=1;
//	int n;
//	cin>>n;
//	while(n>=a){
//		if(n==a){
//			cout<<"Yes\n";
//			return 0;
//		}
//		long long c = a+b;
//		a = b;
//		b = c;
//	}
//	cout<<"No\n";
//}
int dp[100000];
//记忆化搜索以及递推方法； 
int F(int n){
	if(n==1||n==2)return 1;
	if(dp[n]!=-1)return dp[n];
	else{
		dp[n]=F(n-1)+F(n-2);
		return dp[n];
	}
}
int main(){
	memset(dp,-1,sizeof(dp));
	long long int n;
	cin>>n;
	int i;
	while(F(i)<n){
		i++;
	}
	if(F(i)==n){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	
}
