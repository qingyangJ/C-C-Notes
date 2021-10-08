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
    // Ĭ�Ϲ���
    deque<int> d0;
    // ��������
    deque<int> d1(3, 10);
    PrintDeque(d1);
    deque<int> d2(d1.begin(), d1.end());
    PrintDeque(d2);
    deque<int> d3(d2);
    PrintDeque(d3);
}

// deque assign
/*
    deque& operator= (const deque &deq); // ���صȺŲ�����
    assign(beg, end); // ���ԭ�����������
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
    deque.size(); // ����������Ԫ�صĸ���
    deque.resize(num); // ����ָ�������ĳ���Ϊnum, �䳤��Ĭ����䣬�����ضϡ�
    deque.resize(num, elem); // ͬ�ϣ�����Ĭ����elem��䡣
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
    insert(pos, elem); // ��posλ�ò���elem�����������ݵ�λ�á�
    insert(pos, n, elem); // ��posλ�ò���n��ֵ���޷���ֵ��
    insert(pos, beg, end);
    clear(); // �����������������
    earse(beg, end); // ɾ��[beg, end)���ݣ�������һ�����ݵ�λ�á�
    earse(pos); // ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
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

// deque sort Ĭ�ϴ�С�����ǴӴ�С�أ�
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
