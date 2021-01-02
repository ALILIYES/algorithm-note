---
description: C++的基础知识
---

# 基础知识

{% tabs %}
{% tab title="cin,cout" %}
```cpp
#include<iostream>
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;
}
```
{% endtab %}

{% tab title="printf,scanf" %}
```cpp
#include<stdio.h>
//等价于#include<cstdio>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    return 0;
}
```
{% endtab %}
{% endtabs %}

### 常见库函数

\#include&lt;math.h&gt;    \#include&lt;cmath&gt;负责数学函数  
\#include&lt;string.h&gt;    \#include&lt;cstring&gt;负责字符串处理

### 基本数据类型

| 类型 | 范围 |
| :---: | :---: |
| int | -2^9到+2^9 |
| long long | -9^18到+9^18 |
| float | 精度6-7位 |
| double | 精度15-16位 |

### 二进制表示

#### -1的二进制表示?

00000001=1，11111111=？，1+？=0

00000001（8）+11111111（8）=100000000（9）=0（高于8位的溢出）

所以-1用8位表示是11111111

### 数组

#### memset赋值

格式：`memset(数组名，赋值，sizeof(数组名))；`

解释：最好只用memeset赋值**0或-1**，其他数字例如1，1的二进制位0000 0001，一个整形占**四个字节**，由于memset是按照**字节赋值**，也就是这四个字节的值会相同。对于1来说就会成为：0000 0001 0000 0001 0000 0001 0000 0001，而非0000 0000 0000 0000 0000 0000 0000 0001.前者的十进制值即为16843009，所以会出现如下的情况。

对于0和-1，分别为0000 0000与1111 1111，这样的形式即便四个字节的值相同也不会影响值本身，所以我们可以用memset为0与-1赋值而不可以用于其他赋值。

```cpp
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	memset(a,0,sizeof(a));
	for(int i=0;i<5;i++)printf("%d ",a[i]);
	memset(a,1,sizeof(a));
	for(int i=0;i<5;i++)printf("%d",a[i]);
}

//result：0 0 0 0 0 16843009 16843009 16843009 16843009 16843009
```

