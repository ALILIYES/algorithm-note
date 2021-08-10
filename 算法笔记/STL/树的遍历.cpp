struct node{
	int data;
	int layer;
	node* lchild;
	node* rchild;
};


//�������������򣬺��򣬲�α���
void visit(node* root){
	printf("%d",root->data)
}
//��һ�����ڵ� 
void preorder(node* root){
	if(root==NULL){
		return;
	}
	visit(root);
	preorder(root->lchild);
	preorder(root->rchild);
} 
//�м�ĸ��ڵ㣬��ߵ����������ұ������� 
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->lchild);
	visit(root);
	inorder(root->rchild);
}
//���һ�����ڵ� 
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
