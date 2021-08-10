#include<cstdio>
int main(){
	int n,m;
	int a[105]={0};
	int b[105]={0};
	while(scanf("%d",&n)!=-1){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<m;i++){
			int j;
			for(j=0;j<n;j++){
				if(a[j]==b[i]){
					printf("YES\n");
					break;
				}
			}
			if(j==n)printf("NO\n");
		}
	}
}
