//最小公倍数
#include<cstdio>
int gcd(int a,int b){
	return !b?a:gcd(b,a%b);
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)){
		printf("%d",a/gcd(a,b)*b);
	}
	return 0;
} 
