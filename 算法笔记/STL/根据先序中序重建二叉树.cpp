struct node{
	int data;
	node* lchild;
	node* rchild;
}; 

node* create(int preL,int preR,int inL,int inR){
	if(preL>preR)return NULL;
	node* root = new node;
	//新节点的数据域为根节点的值 
	root->data = pre[preL];
	int k;
	//找到中序中的结点 
	for(k = inL;k<=inR;k++){
		if(in[k]==pre[preL]){
			break;
		}
	}
	int numLeft = k-inL;
	root->lchild = create(preL+1,pre+numLeft,inL,k-1);
	root->lchild = create(preL+numLeft+1,preR,k+1,inR);
	return root;
} 
