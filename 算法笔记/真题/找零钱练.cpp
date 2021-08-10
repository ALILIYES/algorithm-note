//ÕÒÁãÇ®
#include<iostream>
using namespace std;
int main(){
	int x,a,count=0;
	cin>>x>>a;
	if(x>5*a){
		x=x-5*a;
		count+=a;
		count=count+x/2+x%2;		
	}else{
		count=x/5;
		x=x%5;
		count=count+x/2+x%2;
	}
	cout<<count;
} 
