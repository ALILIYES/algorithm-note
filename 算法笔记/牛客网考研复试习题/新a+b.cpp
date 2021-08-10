#include<cstdio>
#include<string>
#include<iostream> 
using namespace std;
int main(){
  string a,b;
  bool flaga=true,flagb=true;
  cin>>a>>b;
  for(int i=0;i<a.size();i++){
  	if(a[i]>'9' || a[i]<'0'){
    	flaga = false;
      	break;
    }
  }
  for(int i=0;i<b.size();i++){
  	if(b[i]>'9' || b[i]<'0'){
    	flagb = false;
      	break;
    }
  }
  if(flaga==false){
  	printf("? + ");
  }else{
  	cout<<a<<" + ";
  }
  if(flagb==false){
  	printf("? = ");
  }else{
  	cout<<b<<" = ";
  }
  if(flaga==true && flagb==true){
  	int A=0,B=0,count=1;
  	for(int i=a.size()-1;i>=0;--i){
  		A+=((int)a[i]-'0')*count;
  		count*=10;
	}
	count = 1;
	for(int i=b.size()-1;i>=0;--i){
  		B+=((int)b[i]-'0')*count;
  		count*=10;
	}
	cout<<A+B;
  }else{
  	printf("?");
  }
  
}
