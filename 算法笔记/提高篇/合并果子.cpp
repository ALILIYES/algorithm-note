//哈夫曼树：最优二叉树
//即不同的叶子结点如何组合使所耗费的权重最小
//也可由带权路径计算得来
//树可以不唯一但是最小带权路径长度唯一
//不存在度为一的点
//反复组合最小的两个数，合并

#include<cstdio>
#include<queue>
using namespace std;

priority_queue<long long,vector<long long>,greater<long long>> q;

int main(){
	int n;
	long long temp,x,y,ans=0;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		scanf("%lld",&temp);
		q.push(temp);
	}	
	while(q.size()>1){
		x=q.top();
		q.pop();
		y=q.top();
		q.pop();
		q.push(x+y);
		ans +=x+y;
		printf("%lld\n",ans);
	}
	printf("%lld\n",ans);
	return 0;
} 
