////PAT A1060
////
//#include<cstdio>
//#include<iostream>
//#include<string>
//using namespace std;
//int n;
//string conv(string d,int& e){
//	int k=0;
//	while(d.length()>0&&d[0]=='0'){
//		d.erase(d.begin());
//	}
//	if(d[0]=='.'){
//		//小于0
//		d.erase(d.begin());
//		while(d.length()>0&&d[0]=='0'){
//			d.erase(d.begin());
//			e--;
//		} 
//		//读取主体部分
//		while(d.length()>0&&k<n){
//			k++;
//			e--;
//		} 
//		while(k<n){
//			d=d+'0';
//			k++;
//			e--;
//		}
//		if(k<d.length()){
//			d = d.substr(0,e);
////		d.erase(d.begin()+e,d.end());
//		}
//	}else{
//		//大于0 
//		if(d.find(".")!=string::npos){
//			d.erase(d.find("."),d.length());
//		}
//		while(d.length()>0){
//			e++;
//			k++;
//		}
//		while(k<n){
//			d=d+'0';
//			k++;
//			e++;
//		}		
//	}
//	if(k<d.length()){
//		d = d.substr(0,n);
////		d.erase(d.begin()+e,d.end());
//	}
//	return d;
//}
//int main(){
//	string d1,d2,d3,d4;
//	int e1=0,e2=0;
//	cin>>n>>d1>>d2;
//	d3=conv(d1,e1);
//	d4=conv(d2,e2);
//	if(d3==d4 && e1==e2){
//		cout<<"YES";
//		cout<<" 0."<<d3<<'*'<<"10^"<<e1;
//	}else{
//		cout<<"NO";
//		cout<<" 0."<<d3<<"*"<<"10^"<<e1<<" "<<" 0."<<d4<<"*"<<"10^"<<e2;
//	}
//	
//}


#include<iostream>
#include<string>
using namespace std;
int n;
string deal(string s,int& e){
	int k=0;
	while(s.length()>0 && s[0]=='0'){
		s.erase(s.begin());
	}
	if(s[0]=='.'){
		s.erase(s.begin());
		while(s.length()>0 && s[0]=='0'){
			s.erase(s.begin());
			e--;
		}
	}else{
		while(k<s.length() && s[k]!='.'){
			k++;
			e++;
		}
		if(k<s.length()){
			s.erase(s.begin()+k);
		}
	}
	if(s.length()==0){
		e=0;
	}
	int num=0;
	k=0;
	string res;
	while(num<n){
		if(k<s.length())res+=s[k++];
		else res+='0';
		num++;
	}
	return res;
}
int main(){
	string s1,s2,s3,s4;
	cin>>n>>s1>>s2;
	int e1=0,e2=0;
	s3=deal(s1,e1);
	s4=deal(s2,e2);
	if(s3==s4 && e1==e2){
		cout<<"YES 0."<<s3<<"*10^"<<e1<<endl;
	}else{
		cout<<"NO 0."<<s3<<"*10"<<e1<<" 0."<<s4<<"*10^"<<e2<<endl;
	}
	return 0;
}










