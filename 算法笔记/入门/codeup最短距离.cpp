/*
题目描述
The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest
+
+distance between any pair of exits.
输入
Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), 
followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, 
and DN is between the N-th and the 1st exits. All the numbers in a line are separated by a space. 
The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers,
 provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.
输出
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.
样例输入 Copy
5 1 2 4 14 9
3
1 3
2 5
4 1
样例输出 Copy
3
10
7
*/
#include<cstdio>
int get_dis(int dis[],int N,int start,int end,bool dir);

int main(){
	int N,M,temp,total;
	int dis[100010]={0};
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		//数组输入要使用地址符 
		scanf("%d",&dis[i]);
		total+=dis[i];
	}
	scanf("%d",&M);
	int start,end,s,e,add_dis;
	for(int i=0;i<M;i++){
		scanf("%d %d",&start,&end);
		s=start-1;
		e=end-1;
		add_dis=0;
		while(s!=e){
			add_dis+=dis[s];
			s = (s+1)%N;
		}		
		printf("%d\n",add_dis<total-add_dis?add_dis:total-add_dis);
	}
}
//dir = 1代表正 0 代表负 

/*

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	vector<int> dis(n + 1); //使用vector更好节省空间 
	int sum = 0, left, right, cnt;
	for (int i = 1; i <= n; i++) {
		int temp;
		scanf("%d", &temp);
		sum += temp;
		dis[i] = sum;
	}
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &left, &right);
		if (left > right) swap(left, right);
		int temp = dis[right - 1] - dis[left - 1];
		printf("%d\n", min(temp, sum - temp));
	}
	return 0;
}

*/
