//矩阵求和
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	int M[n+2][m+2];
	int Q[q][5];
	int x1,y1,x2,y2;
	memset(M,0,sizeof(M));
	for(int i=0;i<q;i++){
		cin>>x1>>y1>>x2>>y2;
		Q[i][1]=x1;
		Q[i][2]=y1;
		Q[i][3]=x2;
		Q[i][4]=y2;
	}
	int temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>M[i][j];
		}
	}
	//左到右 
	for(int i=1;i<=n;i++){
		for(int j=2;j<=m;j++){
			M[i][j]+=M[i][j-1];
		}
	}
	//上到下 
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			M[i][j]+=M[i-1][j]; 
		}
	}
	for(int i=0;i<q;i++){
		cout<<M[Q[i][3]][Q[i][4]]+M[Q[i][1]-1][Q[i][2]-1]-M[Q[i][1]-1][Q[i][4]]-M[Q[i][3]][Q[i][2]-1]<<endl;
	}
	
}
/*
3 3 3
1 1 1 1
1 2 2 3
2 2 3 3
1 2 3
4 5 6
7 8 9
*/ 
