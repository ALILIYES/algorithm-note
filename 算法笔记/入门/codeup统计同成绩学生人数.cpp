#include<cstdio>
int main(){
	int N,G;
	int l[1005]={0};
	while(scanf("%d",&N)!=-1){
		if(N==0)break;
		int count=0;
		for(int i=0;i<N;i++){
			scanf("%d",&l[i]);
		}
		scanf("%d",&G);
		for(int i=0;i<N;i++){
			if(l[i]==G)count++;
		}
		printf("%d\n",count);
	}
}
