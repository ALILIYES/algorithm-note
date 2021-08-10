#include<cstdio>
const int maxn=11;
int n,P[maxn],hashtable[maxn]={false};
void fullrank(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",P[i]);
		}
		printf("\n");
		return;
	}
	for(int j=1;j<=n;j++){
		if(hashtable[j]==false){
			P[index]=j;
			hashtable[j]=true;
			fullrank(index+1);
			hashtable[j]=false;
		}
	}
}
int main(){
	n=2;
	fullrank(1);
	return 0;
}
