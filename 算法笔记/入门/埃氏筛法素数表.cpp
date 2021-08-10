#include<cstdio>
const int maxn=101;
int prime[maxn],pnum=0;
int p[maxn]={0};
void Find_prime(){
	for(int i=2;i<maxn;i++){
		if(p[i]==false){
			prime[pnum++]=i;
			for(int j=i+i;j<maxn;j+=i){
				p[j]=true;
			}
		}
	}
}
int main(){
	Find_prime();
	for(int i=0;i<pnum;i++){
		printf("%d ",prime[i]);
	}
}
