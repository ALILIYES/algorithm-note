//���������
//Ҫô�ǿ���
//Ҫô����������С�ڵ��ڸ��ڵ㣬���������ڸ��ڵ� 
//��������ͬһ�����ֲ���˳��ͬ����������ͬ 
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
//������������룬����ҵ��ս����½�rootȻ�󷵻أ�������ھͲ����룬���ڻ�С�ڼ����ݹ� 
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
	//����ֱ������NULL��������һ����Ϊroot�Ŀ�ָ�룬������insert������ֱ�ӵ�һ��if�����½ڵ㡣 
	BST* root=NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
} 
//ǰ�ˣ��ȸ��ڵ�С�������� 
bst* findmax(bst* root){
	while(root->rchild!=NULL){
		root = root->rchild;
	}
	return root;
} 
//���:�ȸ��ڵ�����С��� 
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
			//˵��ΪҶ�ӽڵ�
			//ɾ����㣬�ѽڵ�����ΪNULL���ø��ڵ��Ҳ����� 
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


















