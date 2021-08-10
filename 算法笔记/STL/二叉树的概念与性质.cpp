//二叉树
//空树：没有节点
//只有一个节点，根节点即为叶子节点，
//树的层次从根节点算起，根节点为一层，根节点的叶子节点为第二层。
//结点的度表示有多少颗子树，树的度表示最大的度为多少。
//n个节点的树，边一定为n-1.且满足节点为n，边为n-1的结构一定为树
//深度从根节点开始算起，高度从最底层的叶子节点开始算起。
//多树叫森林。
//区分二叉树与度为二的树的区分 
//满二叉树：树中每一层节点都达到最大
//完全二叉树：从左到右节点位置与满二叉树节点位置相同 


//对于存储在数组中的二叉树来说，某节点为x，其左孩子节点必为2x，其右孩子节点为2x+1.
//数组的存放顺序也恰好为二叉树的层序遍历。
//节点的编号*2大于结点总数n，那么该节点为叶子节点
//节点下标大于总个数，则为空节点。 
#include<cstdio>
using namespace std;

struct node{
	int data;
	node* lchild;
	node* rchild;
};
node* newNode(int v){
	node* Node = new node;
	Node->data = v;
	Node->lchild = Node->rchild = NULL;
	return Node;
}
//搜索方法仅修改了二叉树内容，无需增加引用符号 
void search(node* root,int x,int newdata){
	if(root==NULL)return;
	if(root->data==x){
		root->data=newdata;
	}	
	search(root->lchild,x,newdata);
	search(root->rchild,x,newdata);
}
//插入方法修改了二叉树本身的结构，所以需要增加引用符号 
void insert(node* &root,int x){
	//如果使用*root==NULL就代表根节点的内容是否为空，内容为空不一定代表节点为空 
	if(root==NULL){
		root = newNode(x);
		return;
	}
	if(x<root->data){
		insert(root->lchild,x);
	}else{
		insert(root->rchild,x);
	}
}
node* create(int data[],int n){
	node* root = NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
}
int main(){
	
} 
