//map容器
//常用于字符串与整数映射
//判断某数据是否存在过
//字符串之间的映射 
#include<cstdio>
#include<map>
#include<string> 
#include<set> 
#include<iostream>
using namespace std;
int main(){
	//map可以映射到任何类型 
	map<string,int> mp1;
	map<set<int>,string> mp2;
	mp1["hello"]=1;
	mp1["world"]=2;
	mp1["LI"]=3;
	for(map<string,int>::iterator it=mp1.begin();it!=mp1.end();it++){
		//按照键的从小到大的次序输出，因为其使用红黑树实现的 
		cout<<it->first<<"  "<<it->second<<endl;
	}
	//mp.find(key)
	map<string,int>::iterator it=mp1.find("world");
	cout<<it->first<<"  "<<it->second<<endl;
	mp1.erase(it);
	//mp1.erase("world")按照键删除 
	//mp1.erase(it,mp1.end());按照区间删除
	//mp1.size();
//	mp1.clear(); 
	return 0;
} 
