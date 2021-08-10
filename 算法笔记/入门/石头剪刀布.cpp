/*
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
*/

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int N;
	char jia,yi;
	cin>>N;
	int r[3]={0};//0胜1平2负  甲胜利次数 
	int g[3]={0};//甲胜利最多手势  0布 1 锤 2剪 
	int y[3]={0};//乙胜利手势 0布 1 锤 2剪 
	while(N--){
//		cin>>jia>>yi;
		scanf("\n%c %c",&jia,&yi);
		if(jia==yi){r[1]++;}
		else if(jia=='C'){
			if(yi=='J'){r[0]++;g[1]++;}
			else{r[2]++;y[0]++;}
		}
		else if(jia=='J'){
			if(yi=='C'){r[2]++;y[1]++;}
			else{r[0]++;g[2]++;}	
		}
		else if(jia=='B'){
			if(yi=='J'){r[2]++;y[2]++;}
			else{r[0]++;g[0]++;}	
		}  
	}
	printf("%d %d %d\n",r[0],r[1],r[2]);
	printf("%d %d %d\n",r[2],r[1],r[0]);
	int max=0,min=0;
	for(int i=1;i<3;i++){
		if(g[i]>g[max])max=i;
		if(y[i]>y[min])min=i;
	}
	if(max==0)cout<<"B ";
	if(max==1)cout<<"C ";
	if(max==2)cout<<"J ";
	if(min==0)cout<<"B";
	if(min==1)cout<<"C";
	if(min==2)cout<<"J";
}
