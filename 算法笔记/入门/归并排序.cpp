//�鲢����
#include<cstdio>
void merge(int A[],int L1,int R1,int L2,int R2){
	int i=L1,j=L2;
	int temp[maxn],index=0;
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
	for(i=0;i<index;i++){
		A[L1+i]=temp[i];
	}
}
void mergeSort(int A[],int left,int right){
	if(left<right){
		int mid=(left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid+1,right);
		merge(A,left,mid,mid+1,right);
	}
}

int main(){
	return 0;
} 
