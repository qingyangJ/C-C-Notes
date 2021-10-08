#pragma once


// constructor
/*
    list<T> l;
    list(beg, end);
    list(n, elem);
    list(const list &l);
*/
void CListCon();
// assign
/*
    list& operator= (const list<T> &l);
    assign(n, elem);
    assign(beg, end);
    swap(l2); // 将l2元素与本身元素互换
*/
void CListAssign();

// LIST size
/*
    size(); // 返回容器中元素的个数
    empty();
    resize(num); // 重新指定大小为Num
    resize(num, elem); // 重新指定大小为num, 默认元素为elem
*/
void CListSize();

// list insert del
/*
    push_back(elem);
    pop_back();
    push_front(elem);
    pop_front();

    insert(pos, elem); // pos l.begin();
    insert(pos, n, elem);
    insert(pos, beg, end); // 在pos位置插入[beg, end)区间的数

    clear(); // 移除容器中所有数据
    erase(pos); // 返回下一个数据的位置
    erase(beg, end); // 删除[beg, end)区间的数据，返回下一个数据的位置。
    remove(elem); // 删除容器中所有与elem匹配的数据。
*/
void CListInsertDel();

// list save
/*
    front(); // 返回第一个元素
    back(); // 返回最后一个元素
*/
void CListSave();
// list sort reverse
/*
    l.reverse(); // 反转链表
    l.sort(); // 链表排序  
    所有不支持随机访问迭代器的容器，不可以用标准算法，
    不支持随机访问迭代器的容器，内部会提供对应一些算法
*/
void CListSort();