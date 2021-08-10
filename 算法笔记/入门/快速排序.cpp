#include<cstdio>
const int maxn=10;
int partition(int A[],int left,int right){
	int temp=A[left];
	while(left<right){
		while(left<right && temp<A[right])right--;
		A[left]=A[right];
		while(left<right && temp>=A[left])left++;
		A[right]=A[left];
	}
	A[left]=temp;
	return left;
}
void quicksort(int A[],int left,int right){
	if(left<right){
		int pos=partition(A,left,right);
		quicksort(A,left,pos-1);
		quicksort(A,pos+1,right);
	}
}
int main(){
	int A[maxn]={0,5,3,7,3,6,7,3,1,9};
	quicksort(A,1,9);
	for(int i=1;i<10;i++){
		printf("%d ",A[i]);
	}
}
