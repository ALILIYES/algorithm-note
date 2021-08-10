#include<cstdio>
long long res[67][67]={0};
const int n=60; 
long long C(long long n,long long m){
	if(m==0 || m==n)return 1;
	if(res[n][m]!=0)return res[n][m];
	return res[n][m]=C(n-1,m)+C(n-1,m-1);
}
void calC(){
	for(int i=0;i<67;i++){
		res[i][0]=res[i][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=i/2;j++){
			res[i][j]=res[i-1][j-1]+res[i-1][j];
			res[i][i-j]=res[i][j];
		}
	}
}
void print_ju(){
	for(int i=0;i<67;i++){
		for(int j=0;j<67;j++){
			printf("%d|",res[i][j]);
		}
		printf("\n"); 
	}
}
int main(){
	printf("%d ",C(60,34)); 
//	print_ju();
} 
