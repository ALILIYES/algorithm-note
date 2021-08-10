//PAT A1059
#include<cstdio>
#include<cmath>
struct factor{
	int x,cnt;
}fac[100];
const int maxn=200;
int prime[maxn],pnum=0;
bool p[maxn]={0};

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
void def_prime(long long int n){
	int sqr=(int)sqrt(1.0*n);
	if(n==1){
		fac[0].x=1;
		fac[0].cnt=1;
		num++;
	}else{
		for(int i=0;i<pnum&&prime[i]<=sqr;i++){	//add
			if(n%prime[i]==0){
				fac[num].x=prime[i];
				fac[num].cnt=0;
				while(n%prime[i]==0){
					fac[num].cnt++;
					n/=prime[i];
			}
			num++;
		}
		if(n==1)break;//add
		}
		if(n!=1){
			fac[num].x=n;
			fac[num++].cnt=1;
		}
	}
	
}
int main(){
	long long int n;
	scanf("%lld",&n);
	Find_prime();
	def_prime(n);
	printf("%d=",n);
	for(int i=0;i<num;i++){
		if(fac[i].cnt!=1){
			printf("%d^%d",fac[i].x,fac[i].cnt);
		}else{
			printf("%d",fac[i].x);
		}
		if(i!=num-1){
			printf("*");
		}
	} 
	return 0;
}
