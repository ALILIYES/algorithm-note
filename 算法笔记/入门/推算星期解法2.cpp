//1971年1月1日是星期五，计算输入的日子到那一天的长短，取余即可 
#include<cstdio>
#include<vector> 
#include<string>
#include<map>
#include<iostream>
using namespace std; 
int isleap(int year){
	return (year%4==0&&year%100!=0)||year%400==0;
}
int main(){
	int months[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	vector<string> Week={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	const map<string,int>month{{"January",1},{"February",2},{"March",3},{"April",4},{"May",5},{"June",6},{"July",7},{"August",8},{"September",9},{"October",10},{"November",11},{"December",12},};
	int d,m,y;
	string M;
	while(cin>>d>>M>>y){
//		int count=0;
//		m = month.find(M)->second;
//		for(int i=1971;i<=y;i++){
//			for(int j=1;j<m;j++){
//				if(isleap(i)){
//					count+=months[j][isleap(i)];
//				}
//			}
//		}
//		count=(count+d+4)%7; 
//		cout<<Week[count]<<endl;
		m = month.find(M)->second;
 		int res = 365*(y-1971)+d-1;
        for(int i=1;i<m;i++)res+=months[i][0];
        for(int i=1971;i<=y;i++){
            if((i%4==0 && i%100!=0) ||(i%400==0)){
                if(i<y || (i==y&& m>2))res++;   
            }
        }
		cout<<Week[(4 + res)%7]<<endl;
		
	}
} 
