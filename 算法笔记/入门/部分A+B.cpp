/*
��Ŀ����
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��

�ָ���A��DA��B��DB�����д�������PA + PB��

����
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
���
��һ�������PA + PB��ֵ��
�������� Copy
3862767 6 13530293 3
3862767 1 13530293 8
������� Copy
399
0
*/
#include<cstdio>
int cal(long A,int DA){
	
	int num=0;
	while(A!=0){
		if(A%10==DA){
			num=num*10+DA;
			A/=10;	
		}
		else{
			A/=10;
		}
	}
	return num;
}
int main(){
	long long A,B;
	int DA,DB;
	while(scanf("%ld %d %ld %d",&A,&DA,&B,&DB)!=-1){
		printf("%d\n",cal(A,DA)+cal(B,DB));
	}
}
