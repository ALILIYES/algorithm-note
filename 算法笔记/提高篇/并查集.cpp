//���鼯
//ά�����ϵ����ݽṹ
//���ںϲ��������Ϻ��ж�Ԫ���Ƿ���ͬһ����
//father[i]=j ��ʾ���i�ĸ��ڵ�Ϊj father[i]=i��ʾiΪ���ڵ㣬һ����������ֻ��һ�����ڵ�
//���鼯ÿ�����϶���һ���� 

//��ʼ��
void init(int N){
	for(int i=1;i<=N;i++){
		father[i]=i;
	}
} 
//���ң���������ڵ��λ��
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
	�ݹ����ʽ 
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
		father[faA]=faB;//�ϲ����ڵ㣬�ϲ���������޷��𵽺ϲ����ϵ����� 
	}
} 
