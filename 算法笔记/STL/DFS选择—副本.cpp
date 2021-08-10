#include<vector>
#include<cstdio>
#include<cstdlib>
using namespace std; 
const int maxn = 100;
int N,K,X,maxSqu=-1,A[maxn];
vector<int> temp,ans;
void DFS(int index,int nowk,int sum,int sumSqu){
	if(nowk==K && sum==X){
		if(sumSqu>maxSqu){
			ans = temp;
			maxSqu = sumSqu;
		}
		return;
	}
	if(nowk>K||index==N||sum>X)return;
	temp.push_back(A[index]);
	//去掉加一即变为可重复选择 
	DFS(index,nowk+1,sum+A[index],sumSqu+A[index]*A[index]);
	temp.pop_back();
	DFS(index+1,nowk,sum,sumSqu);
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
