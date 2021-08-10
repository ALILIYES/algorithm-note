#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
bool cmp_s(string a,string b){
	return a.length()>b.length();
}
int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<3;i++){
		printf("%d ",v[i]);
	}
	
	string str[3]={"hello","lili","dami"};
	sort(str,str+3);
	for(int i=0;i<3;i++){
		cout<<str[i]<<" ";
	}
	cout<<endl;

	sort(str,str+3,cmp_s);
	for(int i=0;i<3;i++){
		cout<<str[i]<<" ";
	}
	
	return 0;
} 
