#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
bool cmp(char a,char b){
	return a<b;
}
int main(){
	char str1[51],str2[51];
	scanf("%s %s",&str1,&str2);
	strcat(str1,str2);
	sort(str1,str1+strlen(str1),cmp);
	cout<<str1[0];
	for(int i=1;i<strlen(str1);i++){
		if(str1[i]!=str1[i-1]){
			cout<<str1[i];
		}
	} 
} 
