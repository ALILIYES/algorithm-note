//ͼ
//��һ�ַ�ʽ����Ӿ���
//�������ڹ���ģ�0Ϊ�ޱߣ��б������Ȩֵ
//�ڶ��֣��ڽӱ� 
#include<cstdio>
#include<vector> 
using namespace std;
const int maxn = 100;
struct Node{
	int v,w;//�ߵ��յ����Լ���Ȩ 
	Node(int _v,int _w):v(_v),w(_w) {}
};
int main(){
	vector<Node> Adj[maxn];
	Adj[1].push_back(Node(3,4));
	printf("%d %d",Adj[1][0].v,Adj[1][0].w); 
	
} 
//���ͼ���������ⶥ�㶼������ͨ�����GΪ��ͨͼ�������Ϊ����ͨͼ�����м�����ͨ��ͼ��Ϊ��ͨ����

const int maxv = 100;
const int INF = 10000000;//?
int n,G[maxv][maxv]; //nΪ��������GΪ��Ӿ��� 
bool vis[maxv]={false};

void DFS_1(int u,int depth){
	vis[u] = true;
	for(int v=0;v<n;v++){
		if(vis[v]==false && G[u][v]!=INF){
			DFS(v,depth+1);
		}
	} 
}

void DFSTrave(){
	for(int u=0;u<n;u++){
		if(vis[u]==false){
			DFS_1(u,1);
		}
	}
} 

//�ڽӱ��
vector<Node> Adj[maxv];
int n;
bool vis[maxn]={false};

void DFS_2(int u,int depth){
	vis[u]=true;
	for(int i=0;i<Adj[u].size();i++){
		int v = Adj[u][i];
		if(vis[v]==false){
			DFS(v,depth+1);
		}
	}
}






 





