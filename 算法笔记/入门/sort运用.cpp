//sort������ʹ�ã�sort�����˿�����������
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=6;
bool cmp(int a,int b){
	return a>b; 
	//��Ϊ�ϴ�ķ�ǰ�� 
}
bool cmp_r(int a,int b){
	return a<b; 
	//��Ϊ��С�ķ�ǰ�� 
}
void justprint(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	//ͬ�����ԶԸ����ͣ��ַ�������������� 
	int a[N]={0,5,2,3,4,1};
	//sort(��ʼλ������λ��cmp);Ĭ�ϴ�С����
	sort(a,a+6);
	justprint(a,N);
	printf("\n");
	sort(a,a+6,cmp);
	justprint(a,N);
	sort(a,a+6,cmp_r);
	justprint(a,N);
} 
