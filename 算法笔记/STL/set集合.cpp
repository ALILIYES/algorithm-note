//set ���ϣ��ڲ��Զ�����(����)�Ҳ����ظ�Ԫ�ص�����
#include<cstdio>
#include<set>
using namespace std;
int main(){
	set<int> st;
	//����Ԫ�� 
	st.insert(3);
	for(int i=0;i<10;i++){
		st.insert(i);
	}
	//find()Ѱ��Ԫ�ز��������ĵ����� 
	set<int>::iterator it=st.find(3);
	printf("%d\n",*it); 
	//ͨ��������ɾ�� 
	st.erase(it);
	//ͨ��ֵɾ�� 
	st.erase(4);
	//���
	st.clear(); 
	//setԪ�صĸ���
	printf("%d\n",st.size()); 
	//ֻ��vector��string������*��it+1������ʽ 
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d",*it);
	}
	return 0;

} 
