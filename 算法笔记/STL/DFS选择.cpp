//����N�����������и�����������ѡ��K������K����ǡ�õ���һ������������X�����ж��ַ�����ѡ������ƽ��������һ��
#include<cstdio>
#include<cstdlib>
#include<vector> 
using namespace std;
const int maxn = 100;
int N,K,X,maxsumSqu=-1,A[maxn];
vector<int> temp,ans;
 
void DFS(int index,int nowK,int sum,int sumSqu){ //����ָ������ǰ��ѡ�����ܺ͡���ƽ����
 
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
	//������ѭ�� 
	for(vector<int>::iterator it=ans.begin();it!=ans.end();it++){
		printf("%d ",*it);
	}
} 
