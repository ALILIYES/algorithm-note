//先中序和后序，后输出层序遍历
#include<cstdio>
#include<queue>
using namespace std;
const int maxn = 100;
struct node{
	int data;
	node* lchild;
	node* rchild;
};
int pre[maxn],in[maxn],post[maxn];
int num=0,n;
node* create(int postL,int postR,int inL,int inR){
	printf("hello");
	if(postL>postR)return NULL;
	node* root = new node;
	root->data = post[postR];
	int k;//k必须定义在内部？？？ 
	for(k=inL;k<=inR;k++){
		if(in[k]==post[postR]){
			break;
		}
	}
	int numLeft = k-inL;
	root->lchild = create(postL,postL+numLeft-1,inL,k-1);
	root->rchild = create(postL+numLeft,postR-1,k+1,inR);
	return root;
}
void BFS(node* root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* now = new node;
		now = q.front();
		q.pop();
		printf("%d",now->data);
		num++;
		if(num<n)printf(" ");
		if(now->lchild!=NULL){
			q.push(now->lchild);
		}
		if(now->rchild!=NULL){
			q.push(now->rchild);
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&post[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
	}
	node* root = create(0,n-1,0,n-1);
	BFS(root);
	return 0;
} 
