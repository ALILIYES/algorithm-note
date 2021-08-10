//图
//第一种方式：领接矩阵
//不适用于过大的，0为无边，有边则存在权值
//第二种：邻接表 
#include<cstdio>
#include<vector> 
using namespace std;
const int maxn = 100;
struct Node{
	int v,w;//边的终点编号以及边权 
	Node(int _v,int _w):v(_v),w(_w) {}
};
int main(){
	vector<Node> Adj[maxn];
	Adj[1].push_back(Node(3,4));
	printf("%d %d",Adj[1][0].v,Adj[1][0].w); 
	
} 
//如果图中两个任意顶点都可以连通，则称G为连通图，否则称为非连通图，其中极大连通子图称为连通分量

const int maxv = 100;
const int INF = 10000000;//?
int n,G[maxv][maxv]; //n为顶点数，G为领接矩阵 
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

//邻接表版
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






 





