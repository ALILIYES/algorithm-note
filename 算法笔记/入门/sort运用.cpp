//sort方法的使用：sort避免了快速排序最坏情况
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=6;
bool cmp(int a,int b){
	return a>b; 
	//意为较大的放前面 
}
bool cmp_r(int a,int b){
	return a<b; 
	//意为较小的放前面 
}
void justprint(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	//同样可以对浮点型，字符型数组进行排序 
	int a[N]={0,5,2,3,4,1};
	//sort(开始位，结束位，cmp);默认从小到大
	sort(a,a+6);
	justprint(a,N);
	printf("\n");
	sort(a,a+6,cmp);
	justprint(a,N);
	sort(a,a+6,cmp_r);
	justprint(a,N);
} 
