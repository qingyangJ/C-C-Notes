#include "CSet.h"

#include<iostream>
#include<ctime>
using namespace std;
#include<set>



// print
void CSetPrint(set<int> &s) {
    for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}
void CSetPrint(multiset<int> &s) {
    for(multiset<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}



// 构造和赋值
void CSetConstructor() {
    set<int> s1;
    multiset<int> ms1;
    srand(time(NULL));
    int i = 10;
    while(i--) {
        int elem = rand()%100;
        s1.insert(elem);
    }
    CSetPrint(s1);
    set<int> s2(s1);
    CSetPrint(s2);
    s2.insert(99);
    s2.insert(99);
    // 赋值
    s1 = s2;
    CSetPrint(s1);
    ms1.insert(8);
    ms1.insert(8);
    CSetPrint(ms1);
}

// pair
/*
    返回两个数据：
    创建方式：
        pair<type, type> p(value1, value2);
        pair<type, type> p = make_pair(v1, v2);    
*/
void Pair() {
    pair<string, int> p1(string("lisa"), 20);
    cout<<"name:"<<p1.first<<"  age:"<<p1.second<<endl;
    pair<string, int> p2 = make_pair("Jim", 21);
    cout<<"name:"<<p2.first<<"  age:"<<p2.second<<endl;
}


// sort
class Cmp {
public:
    bool operator() (int v1, int v2) {
        return v1>v2;
    }
};
void CSetSort() {
    set<int, Cmp> s;
    srand(time(NULL));
    int i = 10;
    while(i--) {
        int elem = rand()%100;
        s.insert(elem);
    }
    for(multiset<int, Cmp>::iterator it = s.begin(); it != s.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}