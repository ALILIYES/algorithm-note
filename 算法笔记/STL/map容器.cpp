//map����
//�������ַ���������ӳ��
//�ж�ĳ�����Ƿ���ڹ�
//�ַ���֮���ӳ�� 
#include<cstdio>
#include<map>
#include<string> 
#include<set> 
#include<iostream>
using namespace std;
int main(){
	//map����ӳ�䵽�κ����� 
	map<string,int> mp1;
	map<set<int>,string> mp2;
	mp1["hello"]=1;
	mp1["world"]=2;
	mp1["LI"]=3;
	for(map<string,int>::iterator it=mp1.begin();it!=mp1.end();it++){
		//���ռ��Ĵ�С����Ĵ����������Ϊ��ʹ�ú����ʵ�ֵ� 
		cout<<it->first<<"  "<<it->second<<endl;
	}
	//mp.find(key)
	map<string,int>::iterator it=mp1.find("world");
	cout<<it->first<<"  "<<it->second<<endl;
	mp1.erase(it);
	//mp1.erase("world")���ռ�ɾ�� 
	//mp1.erase(it,mp1.end());��������ɾ��
	//mp1.size();
//	mp1.clear(); 
	return 0;
} 
