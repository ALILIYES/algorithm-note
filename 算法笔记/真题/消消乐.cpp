//消消乐
//如果p>q就所有有多少c就有多少分
//如果p<q就凑两点
#include<cstdio>
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char T[n][m];
bool v[n][m]={false};
bool judge(int x,y){
	bool flag=false;//true为有 
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(T[nx][ny]=='c'&&v[nx][ny]!=true){
			flag = true;
			return flag;
		}
	}
	return flag;
}
void DFS(int x,int y,int sum){
	if(!judge(x,y)){
		return;
	}
	v[x][y]=true;
	DFS(x,y,sum+p);
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(T[nx][ny]=='c'&&v[nx][ny]!=true){
			v[nx][ny]=true;
			DFS(nx,ny,sum+q);
		}
	}
}
int main(){
	int n,m,p,q;
	cin>>n>>m>>p>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>T[i][j];
		}
	}
	int maxt=0,max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(T[i][j]=='c'&&v[i][j]!=true){
				max = 0;
				DFS(i,j,max);
				maxt+=max;
			}
		}
	}
} 
