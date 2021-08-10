//区间贪心
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100;
struct Inteval{
	int left;
	int right;
}c[maxn];
//先选左端点大的排列，左端点一样大，就选右端点小的； 
bool cmp(Inteval a,Inteval b){
	if(a.left!=b.left)return a.left>b.left;
	else return a.right<b.right;
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d",&c[i].left,&c[i].right);
	}
	sort(c,c+N,cmp);
	int ans=1,last_left=c[0].left;
	for(int i=1;i<N;i++){
		if(c[i].right<=last_left){
			ans++;
			last_left=c[i].left;
			printf("\n\n%d,%d\n",c[i].left,c[i].right);
		}
	} 
	printf("%d\n",ans);
	return 0;
} 
