#include<iostream>
#include<math.h>
#include<string>
#include <iomanip> 
#include<stdio.h>
using namespace std;
bool isleap(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}
int months[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

int main(){
	int t1,y1,m1,d1;
	int t2,y2,m2,d2;
	while(cin>>t1>>t2){
		if(t1>t2){
			int temp=t1;
			t1=t2;
			t2=temp;
		}
		y1=t1/10000;m1=(t1%10000)/100;d1=t1%100;
		y2=t2/10000;m2=(t2%10000)/100;d2=t2%100;
		int ans=1;
		while(y1<y2||m1<m2||d1<d2){
			d1++;
			if(d1 == months[m1][isleap(y1)]+1){
				m1++;
				d1 = 1;
			}
			if(m1 == 13){
				y1++;
				m1 = 1;
			} 
			ans++;
		} 
	cout<<ans<<endl;		
	}
	return 0;
} 
