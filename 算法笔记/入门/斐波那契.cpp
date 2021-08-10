//斐波那契第n项
#include<cstdio>
int F(int n){
	if(n==0 || n==1)return 1;
	else return F(n-1)+F(n-2);
} 
int main(){
	int n;
	scanf("%d",&n);
	printf("斐波那契第%d项为%d",n,F(n));
	return 0;
}
