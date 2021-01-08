# 查找元素

### 🙂 问题 A: 统计同成绩学生人数

网址：[http://codeup.hustoj.com/problem.php?cid=100000576&pid=0](http://codeup.hustoj.com/problem.php?cid=100000576&pid=0)

```cpp
#include<cstdio>
int main(){
	int N,G;
	int l[1005]={0};
	while(scanf("%d",&N)!=-1){
		if(N==0)break;
		int count=0;
		for(int i=0;i<N;i++){
			scanf("%d",&l[i]);
		}
		scanf("%d",&G);
		for(int i=0;i<N;i++){
			if(l[i]==G)count++;
		}
		printf("%d\n",count);
	}
}
```

### 🙂 问题 B: 找x

网址：[http://codeup.hustoj.com/problem.php?cid=100000576&pid=1](http://codeup.hustoj.com/problem.php?cid=100000576&pid=1)

```cpp
#include<cstdio>
int main(){
	int n;int a[205];
	while(scanf("%d",&n)!=-1){
		
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int x,r;
		scanf("%d",&x);
		int i;
		for(i=0;i<n;i++){
			if(a[i]==x){
				printf("%d\n",i);break;
			}
		}
		if(i==n){
			printf("-1\n");
		}
		
	}
}
```

### 🙂 问题 C: 查找学生信息

网址：[http://codeup.hustoj.com/problem.php?cid=100000576&pid=2](http://codeup.hustoj.com/problem.php?cid=100000576&pid=2)

因为没有加`while(scanf("%d",&N)!=-1)`导致答案错误

运用了结构体的方法

```cpp
#include<cstdio>
#include<cstring>
typedef struct{
	char n[10];
	char name[100];
	char sex[5];
	int age=0;
}stu_info;
int main(){
	int N;
	stu_info clas[1005];
	while(scanf("%d",&N)!=-1){
		for(int i=0;i<N;i++){
		scanf("%s %s %s %d",&clas[i].n,&clas[i].name,&clas[i].sex,&clas[i].age);	}
	int M;
	scanf("%d",&M);
	
	for(int i=0;i<M;i++){
		char temp[10];
		scanf("%s",&temp);
		int j;
		for(j=0;j<N;j++){
			if(strcmp(clas[j].n,temp)==0){
				printf("%s %s %s %d\n",clas[j].n,clas[j].name,clas[j].sex,clas[j].age);break;
			}
		}
		if(j==N)printf("No Answer!\n");
	}
	}
	
	
}
```

### 🙂 问题 D: 查找

网址：[http://codeup.hustoj.com/problem.php?cid=100000576&pid=3](http://codeup.hustoj.com/problem.php?cid=100000576&pid=3)

```cpp
#include<cstdio>
int main(){
	int n,m;
	int a[105]={0};
	int b[105]={0};
	while(scanf("%d",&n)!=-1){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<m;i++){
			int j;
			for(j=0;j<n;j++){
				if(a[j]==b[i]){
					printf("YES\n");
					break;
				}
			}
			if(j==n)printf("NO\n");
		}
	}
}
```

### 问题 E: 学生查询

网址：[http://codeup.hustoj.com/problem.php?cid=100000576&pid=4](http://codeup.hustoj.com/problem.php?cid=100000576&pid=4)

字符串设置尽量长一点

注意输入n与m的关系

```cpp
#include<cstdio>
typedef struct{
	int num;
	char name[100];
	char sex[20];
	int age;
}stu_info;
int main(){
	int m,n,temp;
	stu_info clas[30];
	scanf("%d",&m);
	//样例数 
	while(m!=0){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %s %s %d",&clas[i].num,&clas[i].name,&clas[i].sex,&clas[i].age);	
		}
		scanf("%d",&temp);
		for(int i=0;i<n;i++){
			if(clas[i].num==temp){
				printf("%d %s %s %d\n",clas[i].num,clas[i].name,clas[i].sex,clas[i].age);
				break;
			}
		}
		m--;		
	}
}
```

