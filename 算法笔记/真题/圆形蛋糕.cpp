//ѡ�񵰸�
//��������ֵ 
#include<iostream>
using namespace std;
//ѭ������ 
int n;
int silces[505];
int maxw=0;
bool judge(int index1,int index2){
	if((index2+1)%(3*n)==index1){
		return false;
	}else if((index1+1)%(3*n)==index2){
		return false;
	}
	return true;
}
void DFS(int index,int sumw){
	
	if(index>=3*n){
		if(sumw>maxw){
			maxw = sumw;
		}
		return;
	} 
//	if(index>3*n)
	if((index+2)%(3*n)!=index){
		DFS(index+2,sumw+silces[index]);
	}
	DFS(index+2,sumw);
//	DFS(index,sumw);
}
int main(){
	cin>>n;
	for(int i=0;i<3*n;i++){
		cin>>silces[i];
	} 
	//����ѡ�� ������
	//ѡ�����ֵ
	DFS(0,0);
	DFS(1,0); 
	cout<<maxw<<endl;
} 
