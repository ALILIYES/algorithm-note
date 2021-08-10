//静态链表
#include<queue>
const int maxn = 100;
struct node{
	int data;
	int lchild;
	int rchild;
}Node[maxn]; 
int v = 0;
int newnode(int v){
	Node[index].data = v;
	Node[index].lchild = -1;
	Node[index].rchild = -1;
}
//对于静态链表使用点来实现 
void search(int root,int x,int newdata){
	if(root==-1){
		return;
	}
	if(Node[root].data == x){
		Node[root].data = newdata;
	}
	search(Node[root].lchild,x,newdata);
	search(Node[root].rchild,x,newdata);
}
void insert(int &root,int x){
	if(Node[root].data == -1){
		Node[root].data = x;
		return;
	}
	if(Node[root].data>x){
		insert(Node[root].lchild,x);
	}else{
		insert(Node[root].rchild,x);
	}
}
int create(int data[],int n){
	int root = -1;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	} 
}

void LayerOrder(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty){
		int now = q.front;
		q.pop();
		printf("%d",Node[now].data);
		if(Node[now].lchild!=-1)q.push(Node[now].lchild);
		if(Node[now].rchild!=-1)q.push(Node[now].rchild);
	}
}

