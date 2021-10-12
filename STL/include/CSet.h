#pragma once

#include<set>


// print
void CSetPrint(std::set<int> &s);
void CSetPrint(std::multiset<int> &s);
// 构造和赋值
void CSetConstructor();

// size & swap
// size();  enpty(); swap(s2);

// insert(elem);  erase(pos); erase(beg, end); erase(elem); clear();

// find(key); count(key);

// pair
/*
    返回两个数据：
    创建方式：
        pair<type, type> p(value1, value2);
        pair<type, type> p = make_pair(v1, v2);    
    使用：
        p.first(); p.second();
*/
void Pair();

// sort  默认自动从小到大排序，如何改变排序规则，就要在插入之间确定新规则
// 利用仿函数实现
void CSetSort();


