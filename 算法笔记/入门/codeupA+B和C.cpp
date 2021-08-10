/*
题目描述
给定区间[-231, 231]内的3个整数A、B和C，请判断A+B是否大于C。
输入
输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。
输出
对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。
样例输入 Copy
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
样例输出 Copy
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
