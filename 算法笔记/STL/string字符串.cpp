#include<string>
#include<cstdio>
#include<iostream> 
using namespace std;
int main(){
	string str="i am the best";
	string str1="liliyang";
	//str.length()长度或者str.size() 
	for(int i=0;i<str.length();i++){
		//直接访问下标的方式 
		printf("%c",str[i]);
	}
	cout<<endl;
	//只能用cin,cout整个的读入读出字符串 
	cin>>str;
	//加号相加 
	str = str+str1;
	//字典序比较字符串 
	printf("%d \n",str>str1?1:0); 
	cout<<str<<endl;
	//使用c_str()来将string变为字符数组
	printf("%s\n",str.c_str());
	//在5位置插入字符串 
	str.insert(5,str1);
	//迭代器插入str.insert(欲插入位置，首尾迭代器) 
	str.insert(str.begin()+3,str1.begin(),str1.end());
	//删除erase
	//str.erase(pos,length);
	//str.erase(first,last);
	//str.erase(it);
	//str.clear();
	//返回子串
	//str.substr(pos,length);
	
	//string::npos等于-1也等于4294967295
	//作为find函数查找失败时候的返回值
	
	//str.find(str2);返回第一次出现的位置 
	//str.find(str2,pos);从pos位置开始查找返回第一次出现的位置
	
	//str.replace(pos,len,str2);
	//str.replace(it1,it2,str2); 
	 
	//迭代器访问 
	for(string::iterator it=str.begin();it!=str.end();it++){
		printf("%c",*it);
	} 
	return 0;
} 
