#include<cstdio>
int main(){
	int n;int a[205];
	while(scanf("%d",&n)!=-1){
		
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int x,r;
		scanf("%d",&x);
		int i;
		for(i=0;i<n;i++){
			if(a[i]==x){
				printf("%d\n",i);break;
			}
		}
		if(i==n){
			printf("-1\n");
		}
		
	}
}
