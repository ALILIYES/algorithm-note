//PAT A1052
//Linked List Sorting
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
const int size = 100000;
struct Node{
	int address;
	int key;
	int next;
	bool flag = false;//判断是否为有效节点 
}node[size];
bool cmp(Node a,Node b){
	if(a.flag==false||b.flag==false){
		return a.flag>b.flag;
	}else{
		return a.key<b.key;
	}
	
}
int main(){
	 int N,begin;
	 scanf("%d %d",&N,&begin);
	 int address,key,next;
	 for(int i=0;i<N;i++){
	 	scanf("%d %d %d",&address,&key,&next);
	 	node[address].address = address;
	 	node[address].key = key;
	 	node[address].next = next;
	 }
	 int count = 0,p = begin;
	 while(p!=-1){
	 	node[p].flag = true;
	 	p = node[p].next;
	 	count++;
	 }
	 if(count==0){
	 	printf("0 -1");
	 }else{
	 	sort(node,node+size,cmp);
	 	printf("%d %05d\n",count,node[0].address);
	 	for(int j=0;j<count;j++){
	 		if(j!=count-1){
	 			node[j].next = node[j+1].address;
	 			printf("%05d %d %05d\n",node[j].address,node[j].key,node[j].next);

			}else{
				printf("%05d %d -1\n",node[j].address,node[j].key);
			}
	 	}
	 }
	 
	 
}
