#include<cstdio>
#include<cmath>
const int maxn=101;
int prime[maxn],pnum=0;
int p[maxn]={0};
struct factor{
	int x,cnt;
}fac[10];
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
int num=0;
void def_prime(int n){
	for(int i=0;prime[i]<sqrt(n);i++){
		if(n%prime[i]==0){
			fac[num].x=prime[i];
			fac[num].cnt=0;
			while(n%prime[i]==0){
				fac[num].cnt++;
				n/=prime[i];
			}
			num++;
		}
	}
	if(n!=1){
		fac[num].x=n;
		fac[num++].cnt=1;
	}
	
}
int main(){
	int n=180;
	Find_prime();
	def_prime(n);
	printf("%d=",n);
	for(int i=0;i<num;i++){
		for(int j=0;j<fac[i].cnt;j++){
			printf("%d",fac[i].x);
			if(i!=num-1){
				printf("*");
			}
		}
	} 
	return 0;
}
