#pragma once

// 算术仿函数
/*
    实现四则运算，其中negate是一元运算，其余都是二元运算
    仿函数原型：
    template<class T> 
    T plus<T> 
    template<class T>
    T minus<T> 
    template<class T> 
    T multiplies<T> 
    template<class T> 
    T divides<T> 
    template<class T> 
    T modulus<T> 
    template<class T> 
    T negate<T> 
*/
void Arithmetic();

// 关系仿函数
/*
    实现关系比对
    仿函数原型：
    template<class T> 
    bool equal_to<T>
    template<class T> 
    bool not_equal_to<T>
    template<class T> 
    bool greater<T>
    template<class T> 
    bool greater_equal<T>
    template<class T> 
    bool less<T>
    template<class T> 
    bool less_equal<T>
*/
void Relational();

// 逻辑仿函数
/*
    实现逻辑运算
    函数原型：
    template<class T>
    bool logical_and<T>
    template<class T>
    bool logical_or<T>
    template<class T>
    bool logical_not<T>
*/
void Logical();

// for_each(iterator beg, iterator end, _func); #include<algorithm>
void ForEach();

// transform(beg1, end1, beg2, _func); <algorithm>
void Trans();

// find(beg, end, value);
void Find();
// int count(beg, end, value);
// count_if(beg, end, _Pred); 按条件统计元素出现的次数
void Count();

// 常用排序算法
void SortFunc();
// 常用的copy替换算法
void CopyFunc();
// numeric
void Numeric();
// UnionFunc
/*
    iterator itEnd = set_intersection(b1, e1, b2, e2, dest); min
    set_union(b1, e1, b2, e2, dest);    
    set_difference(b1, e1, b2, e2, dest);  max
    for_each(b, itEnd, print01);
*/
void UnionFunc();