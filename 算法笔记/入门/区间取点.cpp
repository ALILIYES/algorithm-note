//����̰��
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100;
struct Inteval{
	int left;
	int right;
}c[maxn];
//�Ȱ����Ҷ˵�С�����У�  
bool cmp(Inteval a,Inteval b){
	if(a.right!=b.right)return a.right<b.right;
	else return a.left>b.left;
}
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d %d",&c[i].left,&c[i].right);
	}
	sort(c,c+N,cmp);
	int ans=1,last_right=c[0].right;
	for(int i=1;i<N;i++){
		//ֻ��Ҫȥ�����ں� 
		if(c[i].left>last_right){
			ans++;
			last_right=c[i].right;
			printf("\n%d\n",c[i].right);
		}
	} 
	printf("%d\n",ans);
	return 0;
} 
