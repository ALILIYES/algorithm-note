//ȫ���в��Ұ����ֵ���
//��һ����������˳�������P����һ��hashtable������¼�Ƿ��ù�

#include<cstdio>
const int maxn = 11;
int n,P[maxn],hashtable[maxn]={false};
void fullrank(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",P[i]);
		}
		printf("\n");
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashtable[x] == false){
			P[index] = x;
			hashtable[x] = true;
			fullrank(index+1);
			hashtable[x]=false;
		}
	}
}
int main(){
	n=4;
	fullrank(1);
	return 0;
} 
