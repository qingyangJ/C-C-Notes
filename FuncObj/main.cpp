#include<iostream>

using namespace std;


#include"Pred.h"
#include"Func.h"

// �������󣨷º�����
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
// 1. ����������ʹ��ʱ����������ͨ�����������ã�Ҳ�����в���������ֵ��
void test01() {
    Add a1;
    cout<<"a1+a2="<<a1(2, 3)<<endl;
}
// 2.��������������Լ���״̬
void test02() {
    Add a1;
    a1(2, 4);
    a1(3, 4);
    a1(2, 4);
    cout<<"count:"<<a1.m_count<<endl;
}
// 3.�������������Ϊ��������
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