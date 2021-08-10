//二叉查找树
//要么是空树
//要么所有左子树小于等于根节点，右子树大于根节点 
//二叉树，同一组数字插入顺序不同，所得树不同 
struct bst{
	int data;
	node* lchild;
	node* rchild;
}BST;
void search(bst* root,int x){
	if(root==NULL)return;
	if(x==root->data){
		printf("%d\n",root->data);
	}else if(x<root->data){
		search(bst->lchild,x);
	}else{
		search(bst->rchild,x);
	}
} 
//二叉查找树插入，如果找到空结点就新建root然后返回，如果等于就不插入，大于或小于继续递归 
void insert(bst* &root,int x){
	if(root==NULL){
		root==newNode(x);
		return;
	}
	if(x==root->data){
		return;
	}else if(x<root->data){
		insert(root->lchild,x);
	}else{
		insert(root->rchild,x);
	}
}

bst* create(int data[],int n){
	//定义直接来个NULL，即创建一个名为root的空指针，进而在insert函数中直接第一个if创建新节点。 
	BST* root=NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
} 
//前端；比根节点小的中最大的 
bst* findmax(bst* root){
	while(root->rchild!=NULL){
		root = root->rchild;
	}
	return root;
} 
//后继:比根节点大的最小结点 
bst* findmin(bst* root){
	while(root->lchild!=NULL){
		root = root->lchild;
	}
	return root;
} 

void deletenode(bst* &root,int x){
	if(root==NULL)return;
	if(root->data==x){
		if(root->lchild==NULL && root->rchild==NULL){
			//说明为叶子节点
			//删除结点，把节点设置为NULL，让父节点找不到他 
			root==NULL;
		}else if(root->lchild!=NULL){
			bst* pre = findmax(root->lchild);
			root->data = pre->data;
			deletenode(root->lchild,pre->data);
		}else{
			bst* next = findmin(root->rchild);
			root->data = next->data;
			deletenode(roor->rchild,next->data);
		}	
	}else if(root->data>x){
		deletenode(root->lchild,x);
	}else {
		deletenode(root->rchild,x);
	}
}


















