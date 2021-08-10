#include<cstdio>
const int MAX=10010;
int main(){
	int hashtable[MAX]={0};
	int N,M,temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&temp);
		hashtable[temp]++;
	}
	scanf("%d",&M);
	for(int j=0;j<M;j++){
		scanf("%d",&temp);
		printf("%d\n",hashtable[temp]);
	}
	return 0;	
} 
