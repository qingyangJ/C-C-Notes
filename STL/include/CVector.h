#pragma once
#include<vector>




void PrintVec(vector<int> &v);
// 构造函数
void VectorConstructor();
// 赋值操作
/*
    vector& operator=(const vector &vec);
    assign(v.begin(), v.end());
    assign(n, elem);
*/
void VectorAssign();
// 大小
/*
    empty();
    capacity();
    size(); // 返回容器中元素的个数
    resize(int num);
    resize(int num, elem); // elem默认值
*/
void VectorSize();
// 插入删除
/*
    // 单个插入删除
    push_back(elem); // 从后插入一个
    pop_back(); // 从后删除一个
    insert(const_iterator pos, elem); // pos位置插入elem
    insert(const_iterator pos, int count, elem); // pos位置插入n个elem
    erase(const_iterator pos); // 删除pos位置的elem
    erase(const_iterator start , const_iterator end); // 删除区间内元素
    clear(); // 删除所有元素
*/
void VectorInsertDel();
// 存取
/*
    v.at(2);
    v[2];
    v.front(); // 第一个元素
    v.back(); // 最后一个元素
    v.last(); // 最后一个
*/
void VectorAt();
// vector互换
/*
    swap(vector); // 将vector与本身的元素互换
*/
void VectorSwap();
// vector 预留空间--相当于设置数组的MAX_SIZE，但预留的位置不初始化，且不可访问。
void VectorReserve();