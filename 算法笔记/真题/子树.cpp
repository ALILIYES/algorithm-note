//子树
#include<iostream>
#include<vector> 
using namespace std;
//v的位置代表结点，值代表深度 
struct node{
	int value,depth=0;
};
int main(){
	vector<node> v;
	node n;
	n.value = -1;
	v.push_back(n);
	
	string value; 
	cin>>value;
	int last=0,behind=0;
	for(int i=0;i<value.size();i++){
		if(value[i]==','||i==value.size()-1){
			behind = i;
			if(value[i-1]<'0' || value[i-1]>'9'){
				node n;
				n.value = -1;
				v.push_back(n);
			}else{
				int count=1,total=0;
				for(int j=behind-1;j>=last;j--){
					if(value[i]>='0' && value[i]<='9'){
						total+=(value[i]-'0')*count;
						count*=10;
					}
				}
				node n;
				n.value = total;
				v.push_back(n);
			}
		}
		last = behind;
	}
	v[1].depth=0;
	int maxdep = 0;
	//遍历设置深度
	for(int i=1;i<v.size();i++){
		if(i/2!=0){
			v[i].depth=v[i/2].depth+1;
			if(maxdep<v[i].depth){
				maxdep = v[i].depth;
			}
		}
	} 
	for(int j=1;j<v.size();j++){
		cout<<v[j].value<<" ";
	}
	
	for(int i=0;i<v.size();i++){
		if(i*2<v.size()){
			if(v[i*2].depth==maxdep && v[i*2].value!=-1){
				cout<<v[i].value<<endl;
				break;
			}
		}
	}
} 
