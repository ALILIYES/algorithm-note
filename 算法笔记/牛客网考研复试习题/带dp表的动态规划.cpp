//쳲�������ݹ�д��
//��̬�滮���ڽ���ص������� 
#include<cstdio>
using namespace std;
int main(){
	if(n==0||n==1)return 1;
	if(dp[n]!=-1)return dp[n];
	else{
		dp[n]=F(n-1)+F(n-2);
		return dp[n];
	}
} 
