/*
��Ŀ����
��һ������һ������Ϊn���ڶ�������n��������n�����У����ż���������࣬���NO���������YES��

����

�����ж������ݡ�
ÿ������n��Ȼ������n��������1<=n<=1000����


���

���ż���������࣬���NO���������YES��


�������� Copy
1
67 
7
0 69 24 78 58 62 64 
������� Copy
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

