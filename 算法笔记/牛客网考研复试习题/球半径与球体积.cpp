#include<cstdio>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    double x0,y0,z0,x1,y1,z1;
    while(cin>>x0>>y0>>z0>>x1>>y1>>z1){
        double d = sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0)+(z1-z0)*(z1-z0));
        double t = (4/3.0)*acos(-1)*d*d*d;
        printf("%.3lf %.3lf",d,t);
    }
}
