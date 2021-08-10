/*
题目描述
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。
输出
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

样例输入 Copy
13 1 2 3 4 5 6 7 8 9 10 20 16 18
8 1 2 4 5 6 7 9 16
样例输出 Copy
30 11 2 9.7 9
N 11 2 N 9
*/
#include<cstdio>
int main(){
	int N,temp,flag=0,count=0;
	while(scanf("%d",&N)!=-1){
		int A1=0,A2=0,A3=0,A4=0,A5=0;
		for(int i=0;i<N;i++){
			scanf("%d",&temp);
			if(temp%5==0&&temp%2==0){
				A1+=temp;
			}
			else if(temp%5==1){
				if(flag%2){A2-=temp;}
				else{A2+=temp;}
				flag++;
			}
			else if(temp%5==2){
				A3++;
			}
			else if(temp%5==3){
				A4+=temp;
				count++;
			}
			else{
				if(temp>A5)A5=temp;
			}
		}
		if(A1)printf("%d ",A1);else printf("N ");
		if(flag==0)printf("N ");
		else{printf("%d ",A2);}
		if(A3)printf("%d ",A3);else printf("N ");
		if(A4) {double r=(A4*1.0)/count;printf("%.1f ",r);}else printf("N ");
		if(A5)printf("%d ",A5);else printf("N\n");
		flag=0;
	}
}
