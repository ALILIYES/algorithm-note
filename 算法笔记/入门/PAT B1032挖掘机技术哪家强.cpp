#include<cstdio>
int main(){
	int N,temp,grade,max=0;
	scanf("%d",&N);
	int G[10000]={0};
	for(int i=1;i<=N;i++){
		scanf("%d%d",&temp,&grade);
		G[temp]+=grade;
	}
	for(int i=1;i<=N;i++){
		if(G[max]<G[i]){
			max = i;
		}
	}
	printf("%d %d",max,G[max]);
} 
