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

### 😏 Codeup3.1小节剩下的树

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

### 🙁 Codeup3.1小节A+B

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

{% hint style="success" %}
2021年1月4日
{% endhint %}

* [ ] 明天要把A+B问题重新写一遍
