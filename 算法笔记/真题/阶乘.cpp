/*
使用floor函数。floor(x)返回的是小于或等于x的最大整数。
如：     floor(10.5) == 10    floor(-10.5) == -11


使用ceil函数。ceil(x)返回的是大于x的最小整数。
如：     ceil(10.5) == 11    ceil(-10.5) ==-10
*/
#include<iostream>
#include<cmath> 
using namespace std;
int getnum(long long int n){
	int count=5,total=0;
	while(floor(n/count)!=0){
		total+=floor(n/count);
		count*=5;
	}
	return total;
}
int main(){
	long long int k;
	cin>>k;
	int n=0;
	while(getnum(n)<k){
		n+=5;
	}
	while(getnum(n)>=k){
		n--;
	}
	cout<<n+1;	
} 
