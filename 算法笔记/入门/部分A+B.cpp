/*
题目描述
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。
输出
在一行中输出PA + PB的值。
样例输入 Copy
3862767 6 13530293 3
3862767 1 13530293 8
样例输出 Copy
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
