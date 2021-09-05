#pragma once

#include <iostream>
#include "Point.h"


class Person
{
public:
    //  传统的方式
    Person(int a, int b, int c);
    //  无参构造（默认构造）---初始化列表初始化属性
    Person();
    //  有参构造
    Person(int age, int height);
    //  拷贝构造
    Person(const Person &p);

    //  析构函数
    ~Person();
    
    //  静态成员变量，静态成员函数
    static void fun1();

    int m_A;
    int m_B;
    int m_C;
    static int m_S;
    Point p;
    int m_age;
    int *m_height;
};

class Size
{
public:
    int m_a;
    static int m_b;
    int *m_p;
    void fun1();
    static void fun2();
};
typedef  struct SIZE
{
    char a = '9';
    int c = 0;
    char b = 's';
    
    /* data */
}Struct_S;

