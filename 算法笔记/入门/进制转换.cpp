//longlong�ʹ洢����AB����ת��Ϊʮ���ƣ�Ȼ��ΪD���������
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
