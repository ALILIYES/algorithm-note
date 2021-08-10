//先进先出的限制性数据结构 
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	//front与back访问队首队尾 
	printf("%d %d\n",q.front(),q.back());
	q.pop();
	printf("%d %d\n",q.front(),q.back());
	if(q.empty()==true){
		printf("队列为空");
	}else{
		printf("队列非空");
	} 
} 
