#include "Person.h"

#include<iostream>

//  ��ͳ��ʼ����ʽ
Person::Person(int a, int b, int c) {
    m_A = a;
    m_B = b;
    m_C = c;
}
//  �޲ι��죨Ĭ�Ϲ��죩---ʹ�ó�ʼ���б�
Person::Person () : m_A(9), m_B(10), m_C(15), m_height(nullptr) {
    std::cout<<"Person���޲ι��캯��"<<std::endl;
    
}
//  �вι���
Person::Person(int age, int height) {
    std::cout<<"Person���вι��칹�캯��"<<std::endl;
    m_age = age;
    m_height = new int(height);
    // int b = 999;
    // m_height = &b;
    // std::cout<<"m_:"<<*m_height<<std::endl;
}
//  ��������
Person::Person(const Person &p) {
    std::cout<<"Person�Ŀ������캯��"<<std::endl;
    m_age = p.m_age;
    // m_height = p.m_height;
    m_height = new int(*p.m_height);
}
//  ��������
Person::~Person() {
    std::cout<<"Person����������"<<std::endl;
    if(m_height != nullptr) {
        delete m_height;
        m_height = nullptr;
    }
}

//  ��̬��Ա��������̬��Ա����
void Person::fun1() {
    std::cout<<"Person�ľ�̬��Ա����fun1()"<<std::endl;
    m_S = 100;
}
int Person::m_S = 99;
int Size::m_b = 99;