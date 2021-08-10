//PAT B1013
#include<cstdio>
const int maxn=1000010;
int prime[10010],pnum;
bool p[maxn]={0};
void Find_prime(int N){
	int n=0;
	for(int i=2;i<maxn;i++){
		if(p[i]==false){
			prime[pnum++]=i;
			if(pnum>=N)break;
			for(int j=i+i;j<maxn;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	int M,N,count=0;
	scanf("%d%d",&M,&N);
	Find_prime(N);
	for(int i=M;i<=N;i++){
		printf("%d ",prime[i-1]);
		count++;
		if(count%10!=0 && i<N){
			printf(" ");
		}else{
			printf("\n");
		}
	}
	return 0;
}
