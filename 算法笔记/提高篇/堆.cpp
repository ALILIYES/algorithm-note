//堆:完全二叉树 
//父亲结点大于等于孩子结点值：大顶堆
//父亲结点小于等于孩子结点值：小顶堆
//向下调整：当前结点于左右孩子结点比较，选较大的与其交换，继续对该节点的孩子进行比较，直到比左右孩子都大 
#include<cstdio>
const int maxn = 100;
int heap[maxn],n=100; 
using namespace std;

void downAdjust(int low,int high){
	int i = low,j = i*2;
	while(j<high){
		if(j<high && heap[j+1]>heap[j]){
			j=j+1;
		}
		if(heap[i]<heap[j]){
			swap(heap[i],heap[j]);
			i = j;
			j = i*2;
		}else{
			break;
		}
	} 
}

void upAdjust(int low,int high){
	int i = high,j = i/2;
	while(j>=low){
		if(heap[j]<heap[i]){
			swap(heap[j],heap[i]);
			i = j;
			j = i/2;
		}else{
			break;
		}
	}
} 
void insert(int x){
	heap[++n] = x;
	upAdjust(1,n)
}

void createheap(){
	for(int i=n/2;i>=1;i--){
		downAdjust(i,n);
	}
}

void deletetop(){
	heap[1] = heap[n--];//最后一个覆盖并且元素减一 
	downAdjust(1,n);
}

void heapsort(){
	creatHeap();
	for(int i = n;i>1;i--){
		swap(heap[i],heap[1]);
		downAdjust(1,i-1);
	}
}
 int main(){
 	
 } 
