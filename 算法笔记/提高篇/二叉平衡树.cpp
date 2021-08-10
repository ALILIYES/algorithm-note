//二叉平衡树
//使树的高度在每次插入元素后保持O(logn) 
//左子树与右子树高度之差成为平衡因子
#include<cstdio>
using namespace std;

struct node{
	int v,height;
	node *lchild,*rchild;
};

node* newnode(int v){
	node* Node = new node;
	Node->v = v;
	Node->height = 1;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
int height(node* root){
	if(root=NULL)return 0;
	return root->height;
}

int getbalance(node* root){
	return getheight(root->lchild)-getheight(root->rchild);
}
//更新root结点的height 
void updateHeight(node* root){
	root->height = max(height(root->lchild)+height(root->rchild))+1;
}
void insert(node* &root,int v){
	if(root==NULL){
		root = newNode(v);
		return;
	}
	if(v<root->v){
		insert(root->lchild,v);
		updateHeight(root);
		if(getbalance(root->lchild)==1){
			R(root);
		}else if(getbalance(root->lchild)==-1){
			L(root->lchild);
			R(root);
		}
	}else{
		insert(root->rchild,v);
		updateHeight(root);
		if(getbalance(root->rchild)==-1){
			L(root);
		}else if(getbalance(root->rchild)==1){
			R(root->rchild);
			L(root);
		}
	}
} 

node* create(int data[],int n){
	node* root = NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
}
//左旋
void L(node* &root){
	node* temp = root->rchild;
	root->rchild = temp->lchild;
	temp->lchild = root;
	updateHeight(root);
	updateHeight(temp);
	root = temp;
} 
 //右旋
void R	(node* &root){
 	node* temp = root->lchild;
 	root->lchild = temp->rchild;
 	temp->rchild = root;
 	updateHeight(root);
 	updateHeight(temp);
 	root = temp;
 } 
int main(){
	
} 
