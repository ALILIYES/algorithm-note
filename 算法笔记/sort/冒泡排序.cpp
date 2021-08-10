//ц╟ещеепР
#include<iostream>
using namespace std;
int main(){
	int a[10]={5,3,6,8,4,2,5,9,5,7};
	int temp;
	for(int i=10;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)cout<<a[i]<<" ";
} 
