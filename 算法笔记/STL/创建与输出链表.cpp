////´´½¨Á´±í
//#include<cstdio>
//#include<cstdlib>
//int len = 5;
//struct node{
//	int data;
//	node* next;
//};
//node* create(int Array[]){
//	node *p,*head,*pre;
//	head = new node;
//	head->next = NULL;
//	pre=head;
//	for(int i=0;i<len;i++){
//		p=new node;
//		p->data=Array[i];
//		p->next=NULL;
//		pre->next = p;
//		pre = p;
//	}
//	return head;
//}
//int main(){
//	int Array[len]={5,3,4,2,1};
//	node* L=create(Array);
//	L = L->next;
//	while(L->data!=NULL){
//		printf("%d ",L->data);
//		L = L->next;
//	}
//	return 0;
//} 

#include<cstdio>
#include<cstdlib>
int len = 5;
struct node{
	int data;
	node* next;
}; 
node* create(int Array[]){
	node *pre,*head,*p;
	head = new node;
	head->next = NULL;
	pre=head;
	for(int i=0;i<len;i++){
		p = new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}
int main(){
	int Array[len]={5,3,4,2,1};
	node* L = create(Array);
	L = L->next;
	while(L!=NULL){
		printf("%d ",L->data);
		L = L->next;
	}
}



















