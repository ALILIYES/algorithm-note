#include<cstdio>
using namespace std;
struct node{
	int data;
	node* next;
}; 

int main(){
	int* p1 = (int*)malloc(sizeof(int));
	node* p2 = (node*)malloc(sizeof(node));
	node* p3 = new node;
	//�ڴ�й©����ʹ����new��malloc����Ŀռ��Ժ�û���ͷţ������ڳ������ǰʼ��ռ���ڴ棬������û���ڴ����ʹ�á�
	free(p3);//�ͷ��ڴ沢��p3ָ��Null 
}
