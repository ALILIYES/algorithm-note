//八皇后的全排列解法
#include<cstdio>
#include<cmath>
const int maxn=11;
int n,P[maxn],hashtable[maxn]={false},count=0;
//暴力法 
void eightqueen_b(int index){
	if(index==n+1){
		bool flag=true;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				//i,j代表列，P[i] P[j]代表行 
				if(abs(i-j)==abs(P[i]-P[j])){
					flag=false;
					break;
				}
			}
		}
		if(flag)count++;
		return;
	}
	for(int j=1;j<=n;j++){
		if(hashtable[j]==false){
			P[index]=j;
			hashtable[j]=true;
			eightqueen_b(index+1);
			hashtable[j]=false;
		}
	}
}

//回溯法
void eightqueen_h(int index){
	if(index==n+1){
		count++;
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashtable[x]==false){
			bool flag=true;
			//index列与pre列 
			for(int pre=1;pre<index;pre++){
				if(abs(pre-index)==abs(x-P[pre])){
					flag=false;
					break;
				}
			}
			if(flag){
				P[index]=x;
				hashtable[x]=true;
				eightqueen_h(index+1);
				hashtable[x]=false;
			}
			
		}
	}
} 
int main(){
	n=8;
	eightqueen_h(1);
	printf("%d",count); 
	return 0;
} 
