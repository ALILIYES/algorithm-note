/*
题目描述
给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
现在请计算A+B的结果，并以正常形式输出。

输入
输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。

输出
请计算A+B的结果，并以正常形式输出，每组数据占一行。

样例输入 Copy
-234,567,890 123,456,789
1,234 2,345,678
样例输出 Copy
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
 
