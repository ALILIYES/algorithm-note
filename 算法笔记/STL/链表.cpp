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
	//内存泄漏：在使用完new与malloc申请的空间以后没有释放，导致在程序结束前始终占据内存，以至于没有内存可以使用。
	free(p3);//释放内存并将p3指向Null 
}
