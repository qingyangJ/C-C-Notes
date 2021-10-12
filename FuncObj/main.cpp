#include<iostream>

using namespace std;


#include"Pred.h"
#include"Func.h"

// 函数对象（仿函数）
class Add {
public:
    Add() {
        m_count = 0;
    }
    int operator() (int v1, int v2) {
        m_count++;
        return v1+v2;
    }
    int m_count;
};
// 1. 函数对象在使用时，可以像普通函数那样调用，也可以有参数，返回值。
void test01() {
    Add a1;
    cout<<"a1+a2="<<a1(2, 3)<<endl;
}
// 2.函数对象可以有自己的状态
void test02() {
    Add a1;
    a1(2, 4);
    a1(3, 4);
    a1(2, 4);
    cout<<"count:"<<a1.m_count<<endl;
}
// 3.函数对象可以作为参数传递
void test03(Add &a1) {
    cout<<"a1+a2="<<a1(2, 3)<<endl;
}
// Pred
void test04() {
    OnePred();
}
// Functional
void test05() {
    // Arithmetic();
    // Relational();
    // Logical();
    // ForEach();
    // Trans();
    // Find();
    // Count();
    // SortFunc();
    // CopyFunc();
    // Numeric();
    UnionFunc();
}
int main() {
    test05();


    return 0;
}