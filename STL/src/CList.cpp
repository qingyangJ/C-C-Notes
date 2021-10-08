#include"CList.h"
#include<iostream>
#include<list>

using namespace std;

// list constructor
void CListCon() {}

// list assign
void CListAssign() {}

// list size
void CListSize() {}

// list insert del
void CListInsertDel() {
    list<int> l(10, 3);
    l.push_back(4);
    l.push_front(5);
    l.pop_back();
    l.pop_front();
    l.insert(l.begin(), 6);
    l.insert(l.end(), 2, 7);
    cout<<"earse: "<<*l.erase(l.begin())<<endl;
    l.remove(3);
    for(list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}

// list save
void CListSave() {}

// list sort reverse
/*
    l.reverse(); // 反转链表
    l.sort(); // 链表排序  
    所有不支持随机访问迭代器的容器，不可以用标准算法，
    不支持随机访问迭代器的容器，内部会提供对应一些算法
*/
void CListSort() {
    list<int> l;
    // sort(l.begin(), l.end());
    l.sort();
    l.reverse();
}