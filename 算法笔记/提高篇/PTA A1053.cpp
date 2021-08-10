#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
const int maxn = 100;
struct node{
	int data;
	vector<int> child;
}Node[maxn];

bool cmp(int a,int b){
	return Node[a].data>Node[b].data;
}

int path[maxn];
//M��Ҷ�ڵ� 
int N,M;
long long int S;
void DFS(int index,int numNode,int sum){
	if(sum>S)return;
	if(sum==S){
		if(Node[index].child.size()!=0)return;
		for(int i=0;i<numNode;i++){
			printf("%d",Node[path[i]].data);
			if(i<numNode-1)printf(" ");
			else printf("\n"); 
		}
		return;
	}
	for(int i=0;i<Node[index].child.size();i++){
		int child = Node[index].child[i];
		path[numNode]=child;
		DFS(child,numNode+1,sum+Node[child].data);
	}
}
int main(){
	scanf("%d %d %lld",&N,&M,&S);
	for(int i=0;i<N;i++){
		scanf("%d",&Node[i].data); 
	}
	int id,leaf_num,child;
	for(int i=0;i<M;i++){
		scanf("%d",&id);
		scanf("%d",&leaf_num);
		for(int j=0;j<leaf_num;j++){
			scanf("%d",&child);
			Node[id].child.push_back(child);
		}
		sort(Node[id].child.begin(),Node[id].child.end(),cmp);
	}
	path[0] = 0;
	DFS(0,1,Node[0].data); 
	return 0; 
} 
