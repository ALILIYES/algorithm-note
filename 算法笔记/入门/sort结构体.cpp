#include<cstdio>
#include<algorithm>
using namespace std;
const int N=10;
struct node{
	int x,y;
};
bool cmp(node a,node b){
	return a.x>b.x;
}
bool cmp_d(node a,node b){
	//x不相等时按照x排序，相等时按照y排序 
	if(a.x!=b.x)return a.x>b.x;
	else return a.y>b.y;
}
int main(){
	//结构体的初始化 
	node a[N]={{0,0},{1,4},{2,2},{4,1},{3,3},{5,5}};
	sort(a,a+6,cmp);
	for(int i=0;i<6;i++){
		printf("%d,%d\n",a[i].x,a[i].y);
	}
	return 0;
} 
