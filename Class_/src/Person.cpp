#include "Person.h"

#include<iostream>

//  传统初始化方式
Person::Person(int a, int b, int c) {
    m_A = a;
    m_B = b;
    m_C = c;
}
//  无参构造（默认构造）---使用初始化列表
Person::Person () : m_A(9), m_B(10), m_C(15), m_height(nullptr) {
    std::cout<<"Person的无参构造函数"<<std::endl;
    
}
//  有参构造
Person::Person(int age, int height) {
    std::cout<<"Person的有参构造构造函数"<<std::endl;
    m_age = age;
    m_height = new int(height);
    // int b = 999;
    // m_height = &b;
    // std::cout<<"m_:"<<*m_height<<std::endl;
}
//  拷贝构造
Person::Person(const Person &p) {
    std::cout<<"Person的拷贝构造函数"<<std::endl;
    m_age = p.m_age;
    // m_height = p.m_height;
    m_height = new int(*p.m_height);
}
//  析构函数
Person::~Person() {
    std::cout<<"Person的析构函数"<<std::endl;
    if(m_height != nullptr) {
        delete m_height;
        m_height = nullptr;
    }
}

//  静态成员变量，静态成员函数
void Person::fun1() {
    std::cout<<"Person的静态成员函数fun1()"<<std::endl;
    m_S = 100;
}
int Person::m_S = 99;
int Size::m_b = 99;