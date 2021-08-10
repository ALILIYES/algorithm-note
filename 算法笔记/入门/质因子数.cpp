#include<cstdio>
int get_num(int n,int p){
	int total=0;
	while(n!=0){
		total+=n/p;
		n/=p;
	}
	return total;
} 
int get_num(int n,int p){
	if(n<p)return 0;
	return n/p+cal(n/p,p);
}
long long int get_jie(int n){
	long long int total=1;
	for(int i=1;i<=n;i++){
		total*=i;
	}
	return total;
} 
int main(){
	int n,p;
	scanf("%d%d",&n,&p);
	printf("%d\n",get_num(n,p));
	printf("%lld\n",get_jie(n));
}
