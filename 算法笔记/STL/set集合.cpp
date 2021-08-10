//set 集合，内部自动有序(升序)且不含重复元素的容器
#include<cstdio>
#include<set>
using namespace std;
int main(){
	set<int> st;
	//插入元素 
	st.insert(3);
	for(int i=0;i<10;i++){
		st.insert(i);
	}
	//find()寻找元素并返回他的迭代器 
	set<int>::iterator it=st.find(3);
	printf("%d\n",*it); 
	//通过迭代器删除 
	st.erase(it);
	//通过值删除 
	st.erase(4);
	//清空
	st.clear(); 
	//set元素的个数
	printf("%d\n",st.size()); 
	//只有vector和string可以用*（it+1）的形式 
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d",*it);
	}
	return 0;

} 
