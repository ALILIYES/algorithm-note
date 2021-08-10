#include<queue>
//Ê÷ 
struct node{
	int data;
	vector<int> child;
	int layer;
}Node[maxn]; 

//ÏÈ¸ù±éÀú
void preorder(int root){
	printf("%d",Node[root].data);
	for(int i=0;i<Node[root].child.size();i++){
		preorder(Node[root].child[i]);
	}
} 

void Layerorder(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty()){
		int now = q.fornt();
		q.pop();
		printf("%d",&now);
		for(int i=0;i<Node[root].child.size();i++){
			int child = Node[front].child[i];
			Node[child].layer = Node[now].layer+1;
			q.push(Node[root].child[i]);
		}
	}
}
