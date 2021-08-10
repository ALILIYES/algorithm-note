//��:��ȫ������ 
//���׽����ڵ��ں��ӽ��ֵ���󶥶�
//���׽��С�ڵ��ں��ӽ��ֵ��С����
//���µ�������ǰ��������Һ��ӽ��Ƚϣ�ѡ�ϴ�����佻���������Ըýڵ�ĺ��ӽ��бȽϣ�ֱ�������Һ��Ӷ��� 
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
	heap[1] = heap[n--];//���һ�����ǲ���Ԫ�ؼ�һ 
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
