#include<cstdio>
#include<vector>
using namespace std; 
int finde(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x)return i;
	}
	return -1; 
}
int main(){
	int n;int a[205];
	while(scanf("%d",&n)!=-1){
		
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int x,r;
		scanf("%d",&x);
		printf("%d",finde(a,n,x));
	}
}
