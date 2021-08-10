//¿ìËÙÃÝ
#include<cstdio>
typedef long long LL;
LL pow(LL a,LL b,LL m){
	LL ans=1;
	for(int i=0;i<b;i++){
		ans=ans*a%m;
	}
	return ans;
}
LL pow1(LL a,LL b,LL m){
	LL ans=1;
	for(int i=0;i<b;i++){
		ans=ans*a;
	}
	return ans%m;
}
LL binarypow(LL a,LL b,LL m){
	if(b==0)return 1;
	if(b%2==0){
		LL mul=binarypow(a,b/2,m);
		return mul*mul%m;
	}
	if(b%2==1)return a*binarypow(a,b-1,m)%m;
}
LL twopow(LL a,LL b,LL m){
	LL ans=1;
	while(b>0){
		if(b&1){
			ans=ans*a%m;
		}
		a=a*a%m;
		b>>=1;
	}
	return ans;
}
int main(){
	printf("%lld\n",pow(3,2,2));
	printf("%lld\n",pow1(4,9,5));
	printf("%lld\n",binarypow(4,9,5));
	printf("%lld\n",twopow(4,9,5));
} 
