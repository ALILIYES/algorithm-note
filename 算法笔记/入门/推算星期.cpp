//day of week
#include<iostream>
#include<map>
#include<string>
using namespace std;

bool isleap(int year){
	return year%4==0&&year%100!=0||year%400==0;
}

int main(){
	const map<string,int>month{{"January",1},{"February",2},{"March",3},{"April",4},{"May",5},{"June",6},{"July",7},{"August",8},{"September",9},{"October",10},{"November",11},{"December",12},};
	const map<int,string>week{{1,"Monday"},{2,"Tuesday"},{3,"Wednesday"},{4,"Thursday"},{5,"Friday"},{6,"Saturday"},{7,"Sunday"}};
	int months[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	int d,m,y;
	int d1=11,m1=1,y1=2021;
	string M;
	while(cin>>d>>M>>y){
		m=month.find(M)->second;
		int total1=y*10000+m*100+d;
		int temp=0;
		if(total1>=20210111){
			temp=d1;d1=d;d=temp;
			temp=m1;m1=m;m=temp;
			temp=y1;y1=y;y=temp;
			temp=1;
		}
		int ans=0;
		while(y<y1||m<m1||d<d1){
			d++;
//			cout<<d<<endl;
			if(d==months[m][isleap(y)]+1){
				m++;
				d=1;
			}
			if(m==13){
				y++;
				m=1;
			}
			ans++;
		}
		if(temp){
			ans=ans%7;
			ans++;
			cout<<week.find(ans)->second<<endl;
		}
		else{
			ans=ans%7;
			ans=8-ans;
			cout<<week.find(ans)->second<<endl;
		}
	}
	
}
