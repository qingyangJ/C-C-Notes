#pragma once

#include<set>


// print
void CSetPrint(std::set<int> &s);
void CSetPrint(std::multiset<int> &s);
// ����͸�ֵ
void CSetConstructor();

// size & swap
// size();  enpty(); swap(s2);

// insert(elem);  erase(pos); erase(beg, end); erase(elem); clear();

// find(key); count(key);

// pair
/*
    �����������ݣ�
    ������ʽ��
        pair<type, type> p(value1, value2);
        pair<type, type> p = make_pair(v1, v2);    
    ʹ�ã�
        p.first(); p.second();
*/
void Pair();

// sort  Ĭ���Զ���С����������θı�������򣬾�Ҫ�ڲ���֮��ȷ���¹���
// ���÷º���ʵ��
void CSetSort();


