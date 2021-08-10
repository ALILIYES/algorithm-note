//ì³²¨ÄÉæª¼ÇÒä»¯ËÑË÷
#include<iostream>
#include<algorithm> 
#include<cmath>
#include<cstdio>
#include<string.h>
using namespace std;
//int dp[1000000];
//
//int isfo(long long int n){
//	if(n==1||n==2)return 1;
//	if(dp[n]==-1){
//		dp[n]=isfo(n-1)+isfo(n-2);
//		return dp[n];
//	}else{
//		return dp[n];
//	}
//}
//int main(){
//	long long int n;
//	cin>>n;
//	memset(dp,-1,sizeof(dp));
//	int i=0;
//	while(isfo(i)<n){
//		i++;
//	}
//	if(isfo(i)==n){
//		cout<<"Yes"<<endl;
//	}else{
//		cout<<"No"<<endl;
//	}
//} 

int main(){
	long long int n,a,b=1,c=1;
	cin>>n;
	if(n==1||n==2){
		printf("Yes");
	}else{
		while(a<n){
			a = b+c;
			c = b;
			b = a;
		}
		if(a==n){
			printf("Yes");
		}else{
			printf("No");
		}
	}
	
}







