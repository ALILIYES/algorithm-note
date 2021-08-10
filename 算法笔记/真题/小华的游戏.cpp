#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
struct node{
	int x,y;
	node(int _x,int _y):x(_x),y(_y) {}
};
int dx[]={1,0,0,-1},
	dy[]={0,-1,1,0};
char s[]="DLRU";
int M[505][505],pre[555][555];
void printpath(int x,int y){
	if(pre[x][y]==-1)return;
	int k = pre[x][y];
	printpath(x-dx[k],y-dy[k]);
	cout<<s[k];
}
int main(){
	int n,m;
	cin>>n>>m;
	memset(M,1,sizeof(M));//用1设围墙 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>M[i][j];
		}
	}
	//出发点为（1，1）
	queue<node> q;
	q.push(node(1,1));
	M[1][1]=1;
	pre[1][1]=-1;//第一个地方不算入内 
	while(!q.empty()){
		int x = q.front().x,y=q.front().y;
		q.pop();
		for(int i=0;i<4;i++){
			int nx = x+dx[i],ny=y+dy[i];
			if(M[nx][ny]!=0)continue;
			M[nx][ny]=M[x][y]+1;
			pre[nx][ny]=i;//记录步方向 
			if(nx==n&&ny==m){
				while(!q.empty())q.pop();
				break; 
			}
			q.push(node(nx,ny)); 
		} 
	}
	cout<<M[n][m]-1<<endl;
	printpath(n,m);cout<<endl;
}
