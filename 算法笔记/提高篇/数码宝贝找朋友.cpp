//������  ���㷨�ʼǡ�P332
//���鼯��ʹ��
//ע��߽� 
#include<cstdio>
using namespace std;
const int maxn = 105;
int father[maxn];
bool isroot[maxn]={false};
void init(int N){
	for(int i=1;i<=N;i++){
		father[i]=i;
	}
}
int findfather(int x){
	int s = x;
	while(x!=father[x]){
		x = father[x]; 
	}
	//xΪ���ڵ� 
	while(s!=father[s]){
		int t = s;
		s = father[s];
		father[t]=x; 
	}
	isroot[x]=true;
}

void union(int a,int b){
	int faA = findfather(a);
	int faB = findfather(b);
	if(faA!=faB){
		father[faA] = faB;
	}
}

int main(){
	int n,m;//�����ͺ�����
	scanf("%d %d",&n,&m);
	init(n);
	for(int i=1;i<=m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		union(a,b);
	} 
	for(int i=1;i<=n;i++){
		findfather(i);
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(isroot[i]==true){
			count++;
		}
	}
	printf("%d\n",count);

} 
