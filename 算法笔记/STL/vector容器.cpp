#include<vector>
#include<cstdlib>
#include<cstdio> 
using namespace std;
vector<int> name;
//中间加空格
//变长数组，每个vector中的元素都是一个vector 
vector<vector<int> >name1;
//数组中每个元素都是一个vector
//定长数组 
vector<int> array_vector[100];
int main(){
	for(int i=0;i<10;i++){
		//push_back在末尾添加元素 
		name.push_back(i);
	}
	//删除末尾元素
	name.pop_back(); 
	//清空容器
	//name.clear();
	//插入元素
	name.insert(name.begin()+3,-1); 
	//输出容器的大小 
	printf("%d\n",name.size()); 
	printf("%d\n",name[4]);
	vector<int>::iterator it = name.begin();
	//使用在迭代器上加整数的形式迭代 
	for(int i=0;i<5;i++){
		printf("%d ",*(it+i));
	}
	printf("\n");
	//erase(删除单个元素)
	name.erase(name.begin()+3);
	//erase(删除区间元素)； 
	name.erase(name.begin()+3,name.begin()+5);
	//使用自加的形式迭代 
	for(vector<int>::iterator it=name.begin();it!=name.end();it++){
		printf("%d ",*it);
	}
	return 0;
} 
