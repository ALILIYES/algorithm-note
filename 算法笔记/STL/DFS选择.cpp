//给定N个数（可能有负数），从中选择K个数，K个数恰好等于一个给定的整数X，如有多种方案，选择其中平方和最大的一个
#include<cstdio>
#include<cstdlib>
#include<vector> 
using namespace std;
const int maxn = 100;
int N,K,X,maxsumSqu=-1,A[maxn];
vector<int> temp,ans;
 
void DFS(int index,int nowK,int sum,int sumSqu){ //数组指数、当前已选数、总和、总平方和
 
	if(nowK==K&&sum==X){
		if(sumSqu>maxsumSqu){
			maxsumSqu=sumSqu;
			ans = temp;
		}
		return;
	}
	if(index==N || nowK>K || sum>X)return;
	temp.push_back(A[index]);
	DFS(index+1,nowK+1,sum+A[index],sumSqu+A[index]*A[index]);
	temp.pop_back();
	DFS(index+1,nowK,sum,sumSqu);
	
}
int main(){
	scanf("%d %d %d",&N,&K,&X);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	DFS(0,0,0,0);
	//迭代器循环 
	for(vector<int>::iterator it=ans.begin();it!=ans.end();it++){
		printf("%d ",*it);
	}
} 
