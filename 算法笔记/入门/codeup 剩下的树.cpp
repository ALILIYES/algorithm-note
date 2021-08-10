#include<cstdio>
#include<cstring>
int main(){
	int L,M,time=0;
	int T[10010];
	int R[10010];
	memset(R,-1,10010);
	while(scanf("%d%d",&L,&M)!=EOF){
		if(L==0 && M==0)break; 
		memset(T,-1,10010);
		int a,b,count=0;
		//³õÊ¼»¯Ê÷ 
		for(int i=0;i<=L;i++){
			T[i]=1;
		}
		while(M){
			scanf("%d%d",&a,&b);
			for(int i=a;i<=b;i++){
				T[i]=0;
			}
			M--;
		} 
		for(int i=0;i<=L;i++){
			if(T[i]==1)count++;
		}
		R[time++]=count;
	}
	for(int i=0;i<time;i++){
		printf("%d\n",R[i]);
	} 
} 
