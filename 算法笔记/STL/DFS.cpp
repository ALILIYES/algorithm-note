//DFS
#include<cstdio>
const int maxn = 30;
int n,V,maxValue = 0;
int w[maxn], c[maxn];
void DFS(int index,int sumW,int sumC){
	if(index==n){
		return;
	}
	DFS(index+1,sumW,sumC);
	if(sumW+w[index]<=V){
		if(sumC+c[index]>maxValue){
			maxValue = sumC + c[index];
		}
		DFS(index+1,sumW+w[index],sumC+c[index]);
	}
}
int main(){
	scanf("%d%d",&n,&V);
	for(int i=0;i<n;i++){
		scanf("%d",&w[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	DFS(0,0,0);
	printf("%d",maxValue);
	return 0;
}
