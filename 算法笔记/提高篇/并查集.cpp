//并查集
//维护集合的数据结构
//用于合并两个集合和判断元素是否在同一集合
//father[i]=j 表示结点i的父节点为j father[i]=i表示i为根节点，一个集合有且只有一个根节点
//并查集每个集合都是一棵树 

//初始化
void init(int N){
	for(int i=1;i<=N;i++){
		father[i]=i;
	}
} 
//查找：查找其根节点的位置
int findFather(int x){
	int a = x; 
	while(x!=father[x]){
		x = father[x];
	}
	while(a!=father[a]){
		int z = a;
		a = father[a];
		father[z] = x;
	}
	return x;
	/*
	递归的形式 
	if(x==father[x]){
		return x;
	}else{
		return findFather(father[x]);
	}
	*/
} 

void union(int a,int b){
	int faA = findFather(a);
	int faB = findFather(b);
	if(faA!=faB){
		father[faA]=faB;//合并根节点，合并其他结点无法起到合并集合的作用 
	}
} 
