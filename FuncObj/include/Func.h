#pragma once

// �����º���
/*
    ʵ���������㣬����negate��һԪ���㣬���඼�Ƕ�Ԫ����
    �º���ԭ�ͣ�
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

// ��ϵ�º���
/*
    ʵ�ֹ�ϵ�ȶ�
    �º���ԭ�ͣ�
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

// �߼��º���
/*
    ʵ���߼�����
    ����ԭ�ͣ�
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
// count_if(beg, end, _Pred); ������ͳ��Ԫ�س��ֵĴ���
void Count();

// ���������㷨
void SortFunc();
// ���õ�copy�滻�㷨
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