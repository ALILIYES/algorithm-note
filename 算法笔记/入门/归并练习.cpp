#include<cstdio>
const int maxn=100; 
void merge(int A[],int L1,int R1,int L2,int R2){
	int temp[maxn],index=0;
	int i=L1,j=L2;
	//好多都是小于等于
	//因为R2位也要纳入排序的队列 
	while(i<=R1 && j<=R2){
		if(A[i]<=A[j]){
			temp[index++]=A[i++];
		}
		else{
			temp[index++]=A[j++];
		}
	}
	while(i<=R1)temp[index++]=A[i++];
	while(j<=R2)temp[index++]=A[j++]; 
	for(int i=0;i<index;i++){
		A[L1+i]=temp[i];
	}
}
void mergesort(int A[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		mergesort(A,left,mid);
		mergesort(A,mid+1,right);
		merge(A,left,mid,mid+1,right);
	}
}
int main(){
	int A[maxn]={5,3,7,3,6,7,3,1,9};
	mergesort(A,0,9);
	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
	}
} 
