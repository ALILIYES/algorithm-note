#include<string>
#include<cstdio>
#include<iostream> 
using namespace std;
int main(){
	string str="i am the best";
	string str1="liliyang";
	//str.length()���Ȼ���str.size() 
	for(int i=0;i<str.length();i++){
		//ֱ�ӷ����±�ķ�ʽ 
		printf("%c",str[i]);
	}
	cout<<endl;
	//ֻ����cin,cout�����Ķ�������ַ��� 
	cin>>str;
	//�Ӻ���� 
	str = str+str1;
	//�ֵ���Ƚ��ַ��� 
	printf("%d \n",str>str1?1:0); 
	cout<<str<<endl;
	//ʹ��c_str()����string��Ϊ�ַ�����
	printf("%s\n",str.c_str());
	//��5λ�ò����ַ��� 
	str.insert(5,str1);
	//����������str.insert(������λ�ã���β������) 
	str.insert(str.begin()+3,str1.begin(),str1.end());
	//ɾ��erase
	//str.erase(pos,length);
	//str.erase(first,last);
	//str.erase(it);
	//str.clear();
	//�����Ӵ�
	//str.substr(pos,length);
	
	//string::npos����-1Ҳ����4294967295
	//��Ϊfind��������ʧ��ʱ��ķ���ֵ
	
	//str.find(str2);���ص�һ�γ��ֵ�λ�� 
	//str.find(str2,pos);��posλ�ÿ�ʼ���ҷ��ص�һ�γ��ֵ�λ��
	
	//str.replace(pos,len,str2);
	//str.replace(it1,it2,str2); 
	 
	//���������� 
	for(string::iterator it=str.begin();it!=str.end();it++){
		printf("%c",*it);
	} 
	return 0;
} 
