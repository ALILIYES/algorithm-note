//优先队列
//队首为优先级最大的元素 
#include<queue>
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
struct fruit{
	string name;
	int price;
	//重载小于号操作符，使其以price为优先级标准 
	friend bool operator < (const fruit &f1,const fruit &f2){
		return f1.price<f2.price;
	}
}f1,f2,f3; 
int main(){
	priority_queue<int> q1;
	// 最大的元素放队首，与上式等价 
	priority_queue<int,vector<int>,less<int> >q2; 
	//最小的元素放在队首 
	priority_queue<int,vector<int>,greater<int> >q3; 
	//结构体为单位的优先队列 
	priority_queue<fruit> q4;
	f1.name="orange";
	f1.price=3;
	f2.name="apple";
	f2.price=5;
	f3.name="banana";
	f3.price=4;
	q4.push(f1);
	q4.push(f2);
	q4.push(f3);
	cout<<q4.top().name<<"  "<<q4.top().price<<endl;
	q1.push(3);
	q1.push(4);
	q1.push(5);
	printf("%d\n",q1.top());
	q1.pop();
	//q.empty();
	//q.size();
	printf("%d\n",q1.top());
	return 0; 
} 
