//PATA 1043这是二叉查找树吗
//此题待完成，主体部分已经完全，就剩入队以及比较了 
#include<cstdio>
using namespace std;
const int maxn = 1005;
struct bst{
	int data;
	bst* lchild;
	bst* rchild;
}BST;
int N,data[maxn];

void insert(bst* &root,int x){
	if(root==NULL){
		root = new bst;
		root->data = x;
		root->lchild = root->rchild = NULL;
		return;
	}
	if(root->data<x){
		insert(root->rchild,x);
	}else{
		insert(root->lchild,x);
	}
}

bst* create(int data[],int N){
	bst* root = NULL;
	for(int i=0;i<N;i++){
		insert(root,data[i]);
	}
	return root;
}
int index = 0;
bool flag = true;

void preorder(bst* root){
	if(root==NULL)return;
	if(root->data==data[index]){
		index++;
	}else{
		printf("NO");
		flag = false;
		return;
	}
	preorder(root->lchild);
	preorder(root->rchild);
}

void preordermirror(bst* root){
	if(root==NULL)return;
	if(root->data==data[index]){
		index++;
	}else{
		printf("NO");
		flag = false;
		return;
	}
	preorder(root->rchild);
	preorder(root->lchild);
}

void postorder(bst* root){
	if(root==NULL)return;
	postorder(root->lchild);
	postorder(root->rchild);
	printf("%d",root->data);
}

void postordermirror(bst* root){
	if(root==NULL)return;
	postorder(root->rchild);
	postorder(root->lchild);
	printf("%d",root->data);
}

vector<int> origin,pre,preM,post,postM;

int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",data[i]); 
	}
	bst* root = create(data,N);
	preorder(root);
	if(flag!=false){
		postorder(root);
	}
} 
