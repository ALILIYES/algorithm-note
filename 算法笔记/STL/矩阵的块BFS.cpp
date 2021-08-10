//矩阵的块的BFS写法
#include<cstdio>
#include<cstdlib>
#include<queue>
using namespace std;
const int maxn =100; 
struct node{
	int x,y;
}Node;
int n,m;
int matrix[maxn][maxn];
bool inq[maxn][maxn]={false};
int X[4] = {0,0,1,-1};
int Y[4] = {1,-1,0,0};
bool judge(int x,int y){
	if(x<0||x>n||y<0||y>m)return false;
	if(matrix[x][y]==0||inq[x][y]==true)return false;
	return true;
}
void DFS(int x,int y){
	//先设置为已经访问过，然后判断周围是否还有待访问空间。 
	inq[x][y]=true;
	if(!judge(x+X[0],y+Y[0]) && !judge(x+X[1],y+Y[1]) && !judge(x+X[2],y+Y[2]) && !judge(x+X[3],y+Y[3]))return;
	for(int i=0;i<4;i++){
		if(judge(x+X[i],y+Y[i])){
			DFS(x+X[i],y+Y[i]); 
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==1 && inq[i][j]==false){
				DFS(i,j);
				ans++;
			}
		}
	}
	printf("%d",ans);
} 
