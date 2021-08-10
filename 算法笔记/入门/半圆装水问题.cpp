//装水问题
//S1/S2=r,S2=pai*R^2/2
#include<cstdio>
#include<cmath>
const double pai=acos(-1.0);
const double eps=1e-5;
double waterspace(double R,double h){
	double l=sqrt(R*R-(R-h)*(R-h));
	double S1=R*R*acos((R-h)/R)-l*(R-h);
	double S2=pai*R*R/2;
	printf("%lf %lf\n",S1,S2);
	return S1/S2;
}

double getwater(double R,double r){
	double low=0,high=R,mid=0;
	while((high-low)>eps){
		mid=(low+high)/2;
		if(waterspace(R,mid)>r){
//		if(f(R,mid)>r){
			high=mid;
		}
		else{
			low=mid;
		}
	}
	return low;
} 

int main(){
	double R,r;
	scanf("%lf%lf",&R,&r);
	printf("%lf",getwater(R,r));
	return 0;
}
