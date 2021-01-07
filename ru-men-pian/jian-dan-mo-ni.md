# 简单模拟

### 🙂 PAT B1001害死人不偿命的（3n+1）猜想

```cpp
#include<stdio.h>
int main(){
	int count=0,num;
	scanf("%d",&num);
	while(num!=1){
		if(num%2==1){
			num=(num*3+1)/2;
		}
		else{
			num/=2;
		}
		count++;
	}
	printf("%d",count);
} 
```

### 🙂 PAT B1032 挖掘机技术哪家强

```cpp
#include<cstdio>
int main(){
	int N,temp,grade,max=0;
	scanf("%d",&N);
	int G[10000]={0};
	for(int i=1;i<=N;i++){
		scanf("%d%d",&temp,&grade);
		G[temp]+=grade;
	}
	for(int i=1;i<=N;i++){
		if(G[max]<G[i]){
			max = i;
		}
	}
	printf("%d %d",max,G[max]);
} 
```

### 😏 问题A: 剩下的树

网址:[http://codeup.hustoj.com/problem.php?cid=100000575&pid=0](http://codeup.hustoj.com/problem.php?cid=100000575&pid=0)

**题目思路**：按照题目要求先写伪代码再转换成代码，大体就是用数组的1表示有树，0表示无树，-1表示不在范围内。对区间内的树赋值为0，最后计算个数即可.

**考查知识点**：

* memset\(数组名,0/-1,位数\)——cstring
* while\(scanf\("%d%d",&a,&b\)!=EOF\){if\(a==0&&b==0\)break;}
* 边界控制

```cpp
#include<cstdio>
#include<cstring>
int main(){
	int L,M,time=0;
	int T[10010];//用于树的记录
	int R[10010];//用于树的个数的记录方便最终输出
	memset(R,-1,10010);
	while(scanf("%d%d",&L,&M)!=EOF){//当没有到达文件末尾
		if(L==0 && M==0)break; //本题以0 0 输入为结尾可以这样写
		memset(T,-1,10010);
		int a,b,count=0; //分别表示区间ab和树个数
		//初始化树 
		for(int i=0;i<=L;i++){
			T[i]=1;
		}
		while(M){
			scanf("%d%d",&a,&b);//输入ab
			for(int i=a;i<=b;i++){
				T[i]=0;//ab范围内的赋值
			}
			M--;//控制拔树的次数
		} 
		for(int i=0;i<=L;i++){
			if(T[i]==1)count++;
		}
		R[time++]=count;//数树并记录到count数组
	}
	for(int i=0;i<time;i++){
		printf("%d\n",R[i]);//依次输出
	} 
} 
```

### 🙁 问题B: A+B

网址：[http://codeup.hustoj.com/problem.php?cid=100000575&pid=1](http://codeup.hustoj.com/problem.php?cid=100000575&pid=1)

题目思路：题目本身不难，但是涉及到很多细节，反映出来自己的漏洞。大体思路为将读入的字符串保存为字符数组的类型（ ⭐ 不读入为string类型是因为**scanf无法读入string类型**的字符串，想要实现这一功能需要如下的转化）

```cpp
#include <stdio.h>
#include <string>
#include<iostream>
using namespace std;
int main()
{
	string a;
	a.resize(2); //需要预先分配空间
	scanf("%s", &a[0]);//指向数组的第一位
	cout << a;
	return 0;
} 
```

需要注意的是**cin与cout可以直接读入string类型**的字符串，而无需转化，因为string不属于C中而是C++新增的，所以printf和scanf不能输入输出。关于**printf的输出过程**可以看如下代码：

```cpp
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    string str = "abcd";
    printf("%s",str.c_str());//通过c_str()方法把string型的str转化为字符数组
    return 0;
}
```

还需要说明的是**\#include&lt;string&gt;和\#include&lt;string.h&gt;是不同**的，前者是C++中使用string变量必须的库，并且使用必须加上using namespace std，后者则是要使用字符数组的方法所需要的库，例如{`strcmp、strlen、strcpy、strcat`}等。

继续回到题目，将字符串输入为字符数组以后就考虑到将字符串从后向前遍历并且对每一位数字以逐渐10倍的方式相加，当遇到不是数字的位就省略。这里获取字符串位数的操作使用**`strlen(str)`**，过去我存在一个误区 ❌ 以为定义字符数组以后`strlen`返回的是整个字符数组的长度，但实际是**占用了多少位**。还有一个要记住的点是**字符数组的最后一位是‘\0’**结尾的。

遇到字符串转数字的就直接使用**`str1[i]-48`**，而不要使用**`(int)str1[i]`**，这里也是一个误区，例如0，通过后一种方法得到的就是48（ASCII）还需要减去48，不如直接用第一种方法。

遇到判断是否是数字就直接**`str1[i]>='0'&&str1[i]<='9'`**的方式来判断。

`Long` 型的数字输出使用`printf("%ld",a);`   `Long Long`型\(-2^63—2^63-1\)的数据使用 **`printf("%lld",a);`** ``  字符数组型数据使用**`printf("%s",a);`** ``    int型\(-2\*10^9—2\*10^9\)

连续输入的两个字符串可以**不在scanf中间加空格**`scanf("%s%s",str1,str2)；`

判断是否输出到末尾可以使用`while(scanf("%s%s",str1,str2)!=-1)`的方式

```cpp
 //string 和string.h不同 
#include<cstdio>
#include<string.h>
using namespace std;

int convert(char *str1,int len){
	long result=0;
	int num=1;//记录位数
	for(int i=len-1;i>=0;i--){
		if(str1[i]>='0'&&str1[i]<='9'){
			result+=(str1[i]-48)*num;
//			result+=((int)str1[i])*num; //int直接变为ascii码 
			num*=10;
		}
		printf("\n%d\n",result);
	}
	if(str1[0]=='-'){
		result = -result;
	}
	return result; 
}

int main(){
	long a,b;
	char str1[20],str2[20];
	while(scanf("%s%s",str1,str2)!=-1){
		//计算位数
		a = convert(str1,strlen(str1));
		b = convert(str2,strlen(str2));
//		printf("%ld\n",a);
//		printf("%ld\n",b);
		printf("%ld\n",a+b);
	}
} 
```

**错误的写法**

分析自己的错误得来的教训往往是最珍贵的，我犯的错误有：

* 忽略了代码重复来使用函数代替，导致代码整体冗余
* 对于字符数组的方法不熟练，对于字符数组和字符串的区分不到位
* 对于codeup这种连续输入的形式不熟悉，不清楚如何应对

```cpp
#include<string> //string 和string.h不同 
#include<cstdio>
using namespace std;
int main(){
    long long count[1000];
    int time=0,a=0,b=0,num=1;
    char str1[20],str2[20],;
    while(scanf("%s%s",&str1,&str2)!=EOF){
        //if(== && M==0)break; 
        a=0;b=0;
        //计算位数
        int str1_length=0,str2_length=0; 
        for(int i=0;i<20;i++){
            if(str1[i]=='\0')str1_length=i;
        }
        for(int i=0;i<20;i++){
            if(str2[i]=='\0')str2_length=i;
        }
        num=1;//记录位数
        for(int i=str1_length;i>=0;i--){
            if(str1[i]>='0'&&str1[i]<='9'){
                a+=((int)str1[i])*num;
                num*=10;
            }
            else if(str1[i]=='-'){
                a*=-1;
                break;
            }
        } 
        num = 1;
        for(int i=str2_length;i>=0;i--){
            if(str2[i]>='0'&&str2[i]<='9'){
                b+=((int)str2[i])*num;
                num*=10;
                 
            }
            else if(str2[i]=='-'){
                b*=-1;
                break;
            }
        } 
//      printf("%d %d",a,b);
        count[time++]=a+b;
//      printf("%lld\n",count[time-1]);
    }
    for(int i=0;i<time;i++){
        printf("%lld\n",count[i]);
    }
} 
```

### 🙂 问题C: 特殊乘法

网址：[http://codeup.hustoj.com/problem.php?cid=100000575&pid=2](http://codeup.hustoj.com/problem.php?cid=100000575&pid=2)

```cpp
#include<cstdio>
#include<cstring>
int main(){
	char a[11],b[11];
	while(scanf("%s%s",a,b)!=-1){
		long long sum=0;
		for(int i=0;i<strlen(a);i++){
			for(int j=0;j<strlen(b);j++){
				sum+=(a[i]-'0')*(b[j]-'0');
			}
		}
		printf("%lld\n",sum);
	}
}
```

### 🙂 问题D:比较奇偶数个数

网址：[http://codeup.hustoj.com/problem.php?cid=100000575&pid=3](http://codeup.hustoj.com/problem.php?cid=100000575&pid=3)

```cpp
#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=-1){
		int one=0,two=0,num;
		while(n!=0){
			scanf("%d",&num);
			if(num%2){
				one++; 
			}
			else{
				two++;
			}
			n--;
		}
		if(one<two){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
} 
```

### 🙁 问题E: 最短距离

网址:[http://codeup.hustoj.com/problem.php?cid=100000575&pid=4](http://codeup.hustoj.com/problem.php?cid=100000575&pid=4)

超时问题：在输入距离的时候就计算每个点到第一个点的距离，从而避免了后续多重循环相加的问题，后续计算点到点距离使用数组上到第一个点的值**相减**即可，正反距离为总和与正向相减即可。

数组设置使用`vector<int> a(n);`可以实现使用变量来定义数组的操作，直接使用`int a[1]`只能使用常量定义。记得加上`#include<vector>`

`#include<algorithm>`库函数中`min(a,b)`

对数组点输入使用`scanf("%d",&a[i]);`别忘记地址符，给第一个操作好像不用地址符？

正确不超时代码：

```cpp
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	vector<int> dis(n + 1);
	int sum = 0, left, right, cnt;
	for (int i = 1; i <= n; i++) {
		int temp;
		scanf("%d", &temp);
		sum += temp;
		dis[i] = sum;
	}
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%d %d", &left, &right);
		if (left > right) swap(left, right);
		int temp = dis[right - 1] - dis[left - 1];
		printf("%d\n", min(temp, sum - temp));
	}
	return 0;
}
```

超时代码：

```cpp
#include<cstdio>
int get_dis(int dis[],int N,int start,int end,bool dir);

int main(){
	int N,M,temp,total;
	//vector向量
	int dis[100010]={0};
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		//数组输入要使用地址符 
		scanf("%d",&dis[i]);
		total+=dis[i];
	}
	scanf("%d",&M);
	int start,end,s,e,add_dis;
	for(int i=0;i<M;i++){
		scanf("%d %d",&start,&end);
		s=start-1;
		e=end-1;
		add_dis=0;
		while(s!=e){
			add_dis+=dis[s];
			s = (s+1)%N;
		}		
		//可以使用min替代比较大小
		printf("%d\n",add_dis<total-add_dis?add_dis:total-add_dis);
	}
}
```

### 🙂 问题 F: A+B和C \(15\)

网址:[http://codeup.hustoj.com/problem.php?cid=100000575&pid=5](http://codeup.hustoj.com/problem.php?cid=100000575&pid=5)

```cpp
#include<cstdio>
int main(){
	int T,count=1;
	long A,B,C;
	scanf("%d",&T);
	while(T--){
		scanf("%ld%ld%ld",&A,&B,&C);
		printf("Case #%d: ",count++);
		if(A+B>C)printf("true\n");
		else printf("false\n");
	}
} 
```

### 🙂 问题G: 数字分类

网址:[http://codeup.hustoj.com/problem.php?cid=100000575&pid=6](http://codeup.hustoj.com/problem.php?cid=100000575&pid=6)

if使用逻辑与判断会出错，将两个分开就无报错。

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num, A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num%5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1 && j % 2 == 0) A2 += v[i][j];
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}
```

```cpp
#include<cstdio>
int main(){
	int N,temp,flag=0,count=0;
	while(scanf("%d",&N)!=-1){
		int A1=0,A2=0,A3=0,A4=0,A5=0;
		for(int i=0;i<N;i++){
			scanf("%d",&temp);
			if(temp%5==0){
                if(temp%2==0){
				A1+=temp;
			}}
			else if(temp%5==1){
				if(flag%2){A2-=temp;}
				else{A2+=temp;}
				flag++;
			}
			else if(temp%5==2){
				A3++;
			}
			else if(temp%5==3){
				A4+=temp;
				count++;
			}
			else{
				if(temp>A5)A5=temp;
			}
		}
		if(A1)printf("%d ",A1);else printf("N ");
		if(flag==0)printf("N ");
		else{printf("%d ",A2);}
		if(A3)printf("%d ",A3);else printf("N ");
		if(A4) {double r=(A4*1.0)/count;printf("%.1f ",r);}else printf("N ");
		if(A5)printf("%d",A5);else printf("N");
		flag=0;
	}
}
```

### 🙂 问题H：部分A+B

网址：[http://codeup.hustoj.com/problem.php?cid=100000575&pid=7](http://codeup.hustoj.com/problem.php?cid=100000575&pid=7)

```cpp
#include<cstdio>
int cal(long A,int DA){
	
	int num=0;
	while(A!=0){
		if(A%10==DA){
			num=num*10+DA;
			A/=10;	
		}
		else{
			A/=10;
		}
	}
	return num;
}
int main(){
	long long A,B;
	int DA,DB;
	while(scanf("%ld %d %ld %d",&A,&DA,&B,&DB)!=-1){
		printf("%d\n",cal(A,DA)+cal(B,DB));
	}
}
```

#### 🙂 问题 I: 锤子剪刀布 \(20\)

网址：[http://codeup.hustoj.com/problem.php?cid=100000575&pid=8](http://codeup.hustoj.com/problem.php?cid=100000575&pid=8)

**使用scanf输入字符变量一定小心字符包括换行和空格都会被输入。**

```cpp
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int N;
	char jia,yi;
	cin>>N;
	int r[3]={0};//0胜1平2负  甲胜利次数 
	int g[3]={0};//甲胜利最多手势  0布 1 锤 2剪 
	int y[3]={0};//乙胜利手势 0布 1 锤 2剪 
	while(N--){
//		cin>>jia>>yi;
		scanf("\n%c %c",&jia,&yi);
		if(jia==yi){r[1]++;}
		else if(jia=='C'){
			if(yi=='J'){r[0]++;g[1]++;}
			else{r[2]++;y[0]++;}
		}
		else if(jia=='J'){
			if(yi=='C'){r[2]++;y[1]++;}
			else{r[0]++;g[2]++;}	
		}
		else if(jia=='B'){
			if(yi=='J'){r[2]++;y[2]++;}
			else{r[0]++;g[0]++;}	
		}  
	}
	printf("%d %d %d\n",r[0],r[1],r[2]);
	printf("%d %d %d\n",r[2],r[1],r[0]);
	int max=0,min=0;
	for(int i=1;i<3;i++){
		if(g[i]>g[max])max=i;
		if(y[i]>y[min])min=i;
	}
	if(max==0)cout<<"B ";
	if(max==1)cout<<"C ";
	if(max==2)cout<<"J ";
	if(min==0)cout<<"B";
	if(min==1)cout<<"C";
	if(min==2)cout<<"J";
}
```

