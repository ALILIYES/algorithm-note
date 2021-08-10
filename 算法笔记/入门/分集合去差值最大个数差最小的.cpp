#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<algorithm> 
using namespace std; 
const int maxn=10;
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
	int sum1=0,sum2=0;
	for(int i=0;i<maxn;i++){
		sum1+=A[i];
	}
	//进行一次随机排序以后，左边的就都为小于第n/2个大的数，相加即可 
	randselect(A,0,maxn-1,maxn/2);
	for(int i=0;i<maxn/2;i++){
		sum2+=A[i];
	}
	printf("%d",(sum1-sum2)-sum2);
	return 0;
}
