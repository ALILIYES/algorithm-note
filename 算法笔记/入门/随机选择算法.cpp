#include<cstdio>
#include<ctime>
#include<algorithm> 
using namespace std; 
const int maxn=100;
int randPartition(int A[],int left,int right){
	//随机在left 和right中间选择一个数字作为主元 
	int p =round(1.0*rand()/RAND_MAX*(right-left)+left);
	swap(A[p],A[left]);
	int  temp=A[left];
	while(left<right){
		while(left<right && A[right]>temp)right--;
		A[left]=A[right];
		while(left<right && A[left]<=temp)left++;
		A[right]=A[left];
	}
	A[left]=temp;
	return left;
}
int randselect(int A[],int left,int right,int K){
	if(left==right)return A[left];
	int p=randPartition(A,left,right);
	int M=p-left+1;
	if(K==M)return A[p];
	if(K>M){
		return randselect(A,p+1,right,K-M);
	}else{
		return randselect(A,left,p-1,K);
	}
}
int main(){
	int A[maxn]={5,3,7,3,6,7,3,1,9};
	printf("%d",randselect(A,0,9,4));
}
