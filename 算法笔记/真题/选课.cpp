//选课
//要学习ai必须学习bi 
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int cou[1000];
int findclass(int ai,int bi){
	int last=ai;
	while(true){
//		cout<<last<<" "<<cou[last]<<endl;
		if(cou[last]==bi){
			return 1;
		}
		if(cou[last]==-1){
			break;
		}
		last = cou[last];
	}
	last = bi;
	while(true){
//		cout<<last<<" "<<cou[last]<<endl;
		if(cou[last]==ai){
			return -1;
		}
		if(cou[last]==-1){
			break;
		}
		last = cou[last];
	}
	return 0;
}
int main(){
	int nc,np;
	memset(cou,-1,sizeof(cou));
	cin>>nc>>np;
	int ai,bi;
	for(int i=0;i<np;i++){
		cin>>ai>>bi;
		cou[ai]=bi;
	} 
	int s_ai,s_bi;
	cin>>s_ai>>s_bi;
	cout<<findclass(s_ai,s_bi);
} 
