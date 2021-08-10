//PATB1020
#include<cstdio>
#include<algorithm> 
using namespace std;
const int maxn=1010;

struct yuebin{
	double stock;
	double t_price;
	double s_price;
};
yuebin y[maxn];
bool cmp(yuebin a,yuebin b){
	return a.s_price>b.s_price;
}
//double的输入是lf 
int main(){
	int N;//月饼个数和利润 
	double D,profit;//市场最大需求 
	scanf("%d%lf",&N,&D);
	for(int i=1;i<=N;i++){
		scanf("%lf",&y[i].stock);
	}
	for(int i=1;i<=N;i++){
		scanf("%lf",&y[i].t_price);
		y[i].s_price=y[i].t_price/y[i].stock;
//		printf("%lf ",y[i].s_price);
	}
	sort(y+1,y+N+1,cmp);
	for(int j=1;j<=N;j++){
		if(D!=0){
			if(D>=y[j].stock){
				profit+=y[j].t_price;
				D-=y[j].stock;
			}
			else{
				profit+=y[j].s_price*D;
				D=0;
			}
		}
		else break;	
	}
	printf("%.2lf",profit);

}
