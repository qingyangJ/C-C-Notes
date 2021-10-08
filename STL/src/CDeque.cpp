#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

#include"CDeque.h"


// printDeque
void PrintDeque(const deque<int> &d) {
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}

// deque constructor
void DequeConstructor() {
    // 默认构造
    deque<int> d0;
    // 拷贝构造
    deque<int> d1(3, 10);
    PrintDeque(d1);
    deque<int> d2(d1.begin(), d1.end());
    PrintDeque(d2);
    deque<int> d3(d2);
    PrintDeque(d3);
}

// deque assign
/*
    deque& operator= (const deque &deq); // 重载等号操作符
    assign(beg, end); // 会把原来的内容清空
    assign(n, elem);
*/
void DequeAssign() {
    deque<int> d1;
    deque<int> d2(3, 9);
    d1 = d2;
    d1.assign(1, 8);
    PrintDeque(d1);
}
//deque size
/*
    deque.empty();
    deque.size(); // 返回容器中元素的个数
    deque.resize(num); // 重新指定容器的长度为num, 变长则默认填充，变短则截断。
    deque.resize(num, elem); // 同上，不过默认以elem填充。
*/
void DequeSize() {
    deque<int> d1;
    if(d1.empty()) {
        cout<<"empty"<<endl;
    }
    d1.assign(10, 2);
    cout<<"size: "<<d1.size()<<endl;
    d1.resize(2);
    PrintDeque(d1);
    d1.resize(6, 3);
    PrintDeque(d1);
}

// deque insert del
/*
    push_back(elem); 
    push)front(elem);
    pop_back();
    pop_front();
    insert(pos, elem); // 在pos位置插入elem，返回新数据的位置。
    insert(pos, n, elem); // 在pos位置插入n个值，无返回值。
    insert(pos, beg, end);
    clear(); // 清空容器的所有数据
    earse(beg, end); // 删除[beg, end)数据，返回下一个数据的位置。
    earse(pos); // 删除pos位置的数据，返回下一个数据的位置。
*/
void DequeInsertDel() {
    deque<int> d1(2);
    d1.push_back(3);
    d1.push_front(1);
    PrintDeque(d1);
    d1.pop_back();
    d1.pop_front();
    PrintDeque(d1);
    d1.insert(d1.begin(), 9);
    d1.insert(d1.begin(), 3, 10);
    PrintDeque(d1);
    d1.erase(d1.begin());
    d1.erase(d1.begin(), d1.end());
    PrintDeque(d1);
    d1.clear();
}

// deque save
/*
    at(int dex);
    operator[];
    front();
    back();
*/
void DequeSave() {
    deque<int> d1;
    int i = 10;
    while (i--) {
        d1.push_back(i*i);
    }
    PrintDeque(d1);
    cout<<"at(2):"<<d1.at(2)<<endl;
    cout<<"d1[2]:"<<d1[2]<<endl;
    cout<<"d1.front:"<<d1.front()<<endl;
    cout<<"d1.back:"<<d1.back()<<endl;
    
}

// deque sort 默认从小到大，那从大到小呢？
bool cmp(int a, int b) {
    return a>b;
}
void DequeSort() {
    deque<int> d1;
    int i = 10;
    while (i--) {
        d1.push_back(i*i);
    }
    PrintDeque(d1);
    sort(d1.begin(), d1.end());
    PrintDeque(d1);
    sort(d1.begin(), d1.end(), cmp);
    PrintDeque(d1);
}
