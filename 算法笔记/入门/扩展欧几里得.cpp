#include<cstdio>
int gcd(int a,int b){
	return !b?a:gcd(b,a%b);
} 
int exgcd(int a,int b,int &x,int &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int g=exgcd(b,a%b,x,y);
	int temp=x;
	x=y;
	y=temp-a/b*y;
	return g;
}
int main(){
	
}
