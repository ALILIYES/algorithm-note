//������
//������û�нڵ�
//ֻ��һ���ڵ㣬���ڵ㼴ΪҶ�ӽڵ㣬
//���Ĳ�δӸ��ڵ����𣬸��ڵ�Ϊһ�㣬���ڵ��Ҷ�ӽڵ�Ϊ�ڶ��㡣
//���Ķȱ�ʾ�ж��ٿ����������Ķȱ�ʾ���Ķ�Ϊ���١�
//n���ڵ��������һ��Ϊn-1.������ڵ�Ϊn����Ϊn-1�Ľṹһ��Ϊ��
//��ȴӸ��ڵ㿪ʼ���𣬸߶ȴ���ײ��Ҷ�ӽڵ㿪ʼ����
//������ɭ�֡�
//���ֶ��������Ϊ������������ 
//��������������ÿһ��ڵ㶼�ﵽ���
//��ȫ�������������ҽڵ�λ�������������ڵ�λ����ͬ 


//���ڴ洢�������еĶ�������˵��ĳ�ڵ�Ϊx�������ӽڵ��Ϊ2x�����Һ��ӽڵ�Ϊ2x+1.
//����Ĵ��˳��Ҳǡ��Ϊ�������Ĳ��������
//�ڵ�ı��*2���ڽ������n����ô�ýڵ�ΪҶ�ӽڵ�
//�ڵ��±�����ܸ�������Ϊ�սڵ㡣 
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
//�����������޸��˶��������ݣ������������÷��� 
void search(node* root,int x,int newdata){
	if(root==NULL)return;
	if(root->data==x){
		root->data=newdata;
	}	
	search(root->lchild,x,newdata);
	search(root->rchild,x,newdata);
}
//���뷽���޸��˶���������Ľṹ��������Ҫ�������÷��� 
void insert(node* &root,int x){
	//���ʹ��*root==NULL�ʹ�����ڵ�������Ƿ�Ϊ�գ�����Ϊ�ղ�һ������ڵ�Ϊ�� 
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
