//可能出现负数
#include<iostream>
using namespace std;
int main(){
	int kx,ky,dx,dy;
	cin>>kx>>ky>>dx>>dy;
	int K[21][21],D[21][21],R[21][21];
	for(int i=0;i<kx;i++){
		for(int j=0;j<ky;j++){
			cin>>K[i][j];
		}
	}
	for(int i=0;i<dx;i++){
		for(int j=0;j<dy;j++){
			cin>>D[i][j];
		}
	}
	//计算卷积矩阵
	for(int i=0;i<=dx-kx;i++){
		for(int q=0;q<=dx-kx;q++){
			int ans=0; 
			for(int j=0;j<kx;j++){
				for(int n=0;n<kx;n++){
//					cout<<K[j][n]<<" "<<D[j+i][n+q]<<endl;
					ans = ans + K[j][n]*D[j+i][n+q];
					
				}
			}
			R[i][q]=ans;	
		}	
	} 
	
	for(int i=0;i<=dx-kx;i++){
		for(int q=0;q<=dx-kx;q++){
			cout<<R[i][q];
			if(q!=dx-kx){
				cout<<" ";
			}
		}
		cout<<endl;
	}
} 
