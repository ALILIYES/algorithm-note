/*
��Ŀ����
��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��
����
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���
���
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����
�������� Copy
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
������� Copy
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/ 
#include<cstdio>
int main(){
	int T,count=1;
	long A,B,C;
	scanf("%d",&T);
	while(T--){
		scanf("%ld%ld%ld",&A,&B,&C);
		printf("Case #%d: ",count++);
		if(A+B>C)printf("true\n");
		else printf("false\n");
	}
} 
