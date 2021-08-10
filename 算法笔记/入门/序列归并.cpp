//两序列合并
#include<cstdio>
const int maxn=5; 
void merge(int a[],int b[],int c[]){
	int i=0,j=0,index=0;
	while(i<maxn && j<maxn){
		if(a[i]>=b[j]){
			c[index++]=b[j++];
		}
		else{
			c[index++]=a[i++];
		}
	}
	while(i<maxn)c[index++]=a[i++];
	while(j<maxn)c[index++]=b[j++];
	for(int h=0;h<10;h++){
		printf("%d ",c[h]);
	}
}
int main(){
	int a[maxn]={0,2,4,6,8};
	int b[maxn]={1,3,5,7,9};
	int c[maxn*2]={0};
	merge(a,b,c);
} 
