//�Ƚ��ȳ������������ݽṹ 
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	//front��back���ʶ��׶�β 
	printf("%d %d\n",q.front(),q.back());
	q.pop();
	printf("%d %d\n",q.front(),q.back());
	if(q.empty()==true){
		printf("����Ϊ��");
	}else{
		printf("���зǿ�");
	} 
} 
