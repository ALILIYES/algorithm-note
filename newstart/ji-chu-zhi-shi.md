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
| :--- | :--- |
| int | -2^9到+2^9 |
| long long | -9^18到+9^18 |
| float | 精度6-7位 |
| double | 精度15-16位 |



