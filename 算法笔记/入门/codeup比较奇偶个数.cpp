/*
题目描述
第一行输入一个数，为n，第二行输入n个数，这n个数中，如果偶数比奇数多，输出NO，否则输出YES。

输入

输入有多组数据。
每组输入n，然后输入n个整数（1<=n<=1000）。


输出

如果偶数比奇数多，输出NO，否则输出YES。


样例输入 Copy
1
67 
7
0 69 24 78 58 62 64 
样例输出 Copy
YES
NO
*/ 
#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=-1){
		int one=0,two=0,num;
		while(n!=0){
			scanf("%d",&num);
			if(num%2){
				one++; 
			}
			else{
				two++;
			}
			n--;
		}
		if(one<two){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
} 

