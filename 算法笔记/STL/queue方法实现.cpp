#include<queue>
using namespace std;
void clear(queue q){
	front=rear=-1;
}
int size(queue q){
	return front-rear;
}
bool empty(queue q){
	if(front==rear)return true;
	else return false;
}
void push(int x,queue q){
	queue[++rear]=x;
}
void pop(){
	front++; 
}
int get_front(){
	return q[front+1];
}
int get_rear(){
	return q[rear];
}
int main(){
	queue<int> qu;
} 
