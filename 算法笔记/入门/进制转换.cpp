//longlong型存储两个AB，先转换为十进制，然后化为D进制输出；
#include<cstdio>
int main(){
	long long A,B,C;
	int D;
	while(true){
		scanf("%d",&D);
		if(D==0)break;
		scanf("%lld %lld",&A,&B);
		int r[35],num=0;
		C=A+B;
		do{
			r[num++]=C%D;
			C/=D;
		}while(C!=0);
		while(num!=0){
			printf("%d",r[--num]);
		}
	}
} 
