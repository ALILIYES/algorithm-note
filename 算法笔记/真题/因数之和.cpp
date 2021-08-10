//ÒòÊı
#include<iostream>
#include<algorithm>
using namespace std;
int nums[1000000];
int getyin(int n){
	int count=0;
	int total=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i==sqrt(n)){
				count++;
				total+=i;
			}else{
				count+=2;
				total+=i;
				total+=(n/i);
			}
		}
	}
	if(count==4){
		return total;
	}else{
		return -1;
	}
}
int main(){
	int n;
	cin>>n;
	int total=0;
	for(int i=0;i<n;i++){
		cin>>nums[i];
		if(getyin(nums[i])!=-1){
			total+=getyin(nums[i]);
		}
	}
	cout<<total<<endl;
} 
