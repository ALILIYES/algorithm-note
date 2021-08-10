//�Թ�
//����С���� 
#include<cstdio> 
#include<cstdlib>
#include<queue> 
using namespace std;
const int maxn =100;
struct node{
	int x,y;
	int step;//��S��ʼ����x,y����С���� 
}S,T,Node;//��㣬�յ㣬��ʱ�ڵ� 

int n,m;
char maze[maxn][maxn];
bool inq[maxn][maxn]={false};
//�����ʾ�Ƿ��Ѿ���� 
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};

bool test(int x,int y){
	if(x>=n||x<0||y>=m||y<0)return false;
	if(maze[x][y]=='*'||inq[x][y]=='true')return false;
	return true;
} 
int BFS(){
	queue<node> q;
	q.push(S);
	inq[S.x][S.y];
	while(!q.empty()){
		node top = q.front();
		q.pop();
		if(top.x==T.x && top.y==T.y){
			return top.step;
		}
		for(int i=0;i<4;i++){
			int newX = top.x +X[i];
			int newY = top.y +Y[i];
			if(test(newX,newY)){
				Node.x = newX,Node.y = newY;
				Node.step = top.step+1;
				q.push(Node);//push��ȥ����Ԫ�صĸ������ı�����е�ֵ����Ա������Ӱ�� 
				inq[newX][newY] = true;
			}
		}
	} 
	return -1; // �޷����� 
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		getchar();
		for(int j=0;j<m;j++){
			maze[i][j] = getchar();
		}
		maze[i][m+1] = '\0';
	} 
	scanf("%d%d%d%d",&S.x,&S.y,&T.x,&T.y);
	S.step = 0;
	printf("%d\n",BFS());
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%c ",maze[i][j]);
		}
		printf("\n") ;
	} 
	return 0;
}
