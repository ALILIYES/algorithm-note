struct node{
	int data;
	int layer;
	node* lchild;
	node* rchild;
};


//遍历：先序，中序，后序，层次遍历
void visit(node* root){
	printf("%d",root->data)
}
//第一个根节点 
void preorder(node* root){
	if(root==NULL){
		return;
	}
	visit(root);
	preorder(root->lchild);
	preorder(root->rchild);
} 
//中间的根节点，左边的左子树，右边右子树 
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->lchild);
	visit(root);
	inorder(root->rchild);
}
//最后一个根节点 
void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->lchild);
	posrorder(root->rchild);
	visit(root);
} 
void layerorder(node* root){
	queue<int> q;
	root->layer = 1;
	q.push(root);
	while(!q.empty()){
		node* now = q.front();
		q.pop();
		visit(now);
		if(now->lchild!=NULL){
			now->lchild->layer = now->layer+1;
			q.push(now->lchild);
		}
		if(now->rchild!=NULL){
			now->rchild->layer = now->layer+1;
			q.push(now->rchild);
		}
	}
} 
