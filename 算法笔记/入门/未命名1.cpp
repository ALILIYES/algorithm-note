/*
��Ŀ����
������������A��B�����ʾ��ʽ�ǣ��Ӹ�λ��ʼ��ÿ��λ���ö���","������
���������A+B�Ľ��������������ʽ�����

����
������������������ݣ�ÿ������ռһ�У�����������A��B��ɣ�-10^9 < A,B < 10^9����

���
�����A+B�Ľ��������������ʽ�����ÿ������ռһ�С�

�������� Copy
-234,567,890 123,456,789
1,234 2,345,678
������� Copy
-111111101
2346912
*/ 

#include<stdio.h.>
#include<cstring>
int convert(char a[],int len){
	int n=1;
	long sum=0;
	for(int i=len-1;i>=0;i--){
		if(a[i]>='0' && a[i]<='9'){
			sum+=(a[i]-'0')*n;
			n*=10;
		}
//		printf("%ld\n",sum);
	}
	if(a[0]=='-')sum=-sum;
	return sum;
}

int main(){
	char a[20],b[20];
	long A,B;
	while(scanf("%s%s",a,b)!=-1){
		A=convert(a,strlen(a));
		B=convert(b,strlen(b));
		printf("%ld",A+B);
	}
	return 0;
}
 
