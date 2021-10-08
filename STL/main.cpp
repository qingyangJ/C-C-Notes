#include<iostream>
using namespace std;

#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

#include"CString.h"
#include"CVector.h"
#include"CDeque.h"
#include"CStack.h"
#include"CQueue.h"
#include"CList.h"
#include"Example.h"


// String Container
void test01() {
    // StringConstructor();
    // StringAssign();
    // StringAppend();
    // StringFind();
    // StringCompare();
    // StringAt();
    // StringInsert();
    // StringSubstr();
    StringLen();
}

// Vector Container
void test02() {
    // VectorConstructor();
    // VectorAssign();
    // VectorSize();
    // VectorInsertDel();
    // VectorAt();
    // VectorSwap();
    VectorReserve();
}

// Deque
void test03() {
    // DequeConstructor();
    // DequeAssign();
    // DequeSize();
    // DequeInsertDel();
    // DequeSave();
    DequeSort();
}
// ��5��ѡ��ABCDE, 10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣�ȡƽ���֡�
void test04() {
    vector<Person> v;
    string nameSeed = "ABCDE";
    for(int i = 0; i<nameSeed.length(); i++) {
        string name = "ѡ��";
        name += nameSeed[i];
        Person p(name, 0);
        v.push_back(p);
    }
    // mark
    Mark(v);
    // show
    showSorce(v);
}

// stack
void test05() {
    StackDemo();
}
// queue
void test06() {
    QueueDemo();
}
// list
void test07() {
    CListInsertDel();
}
// sort
void test08() {
    ListSortDemo();
}
int main() {
    test08();
    
    
    return 0;
}