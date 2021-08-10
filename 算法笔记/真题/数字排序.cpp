#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n; 
	scanf("%d",&n);
	int v[n];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	sort(v,v+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d",v[i]);
	}
}
