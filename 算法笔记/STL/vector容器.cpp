#include<vector>
#include<cstdlib>
#include<cstdio> 
using namespace std;
vector<int> name;
//�м�ӿո�
//�䳤���飬ÿ��vector�е�Ԫ�ض���һ��vector 
vector<vector<int> >name1;
//������ÿ��Ԫ�ض���һ��vector
//�������� 
vector<int> array_vector[100];
int main(){
	for(int i=0;i<10;i++){
		//push_back��ĩβ���Ԫ�� 
		name.push_back(i);
	}
	//ɾ��ĩβԪ��
	name.pop_back(); 
	//�������
	//name.clear();
	//����Ԫ��
	name.insert(name.begin()+3,-1); 
	//��������Ĵ�С 
	printf("%d\n",name.size()); 
	printf("%d\n",name[4]);
	vector<int>::iterator it = name.begin();
	//ʹ���ڵ������ϼ���������ʽ���� 
	for(int i=0;i<5;i++){
		printf("%d ",*(it+i));
	}
	printf("\n");
	//erase(ɾ������Ԫ��)
	name.erase(name.begin()+3);
	//erase(ɾ������Ԫ��)�� 
	name.erase(name.begin()+3,name.begin()+5);
	//ʹ���Լӵ���ʽ���� 
	for(vector<int>::iterator it=name.begin();it!=name.end();it++){
		printf("%d ",*it);
	}
	return 0;
} 
