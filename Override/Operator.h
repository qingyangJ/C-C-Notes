#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out, Person& p);
public:
    Person();
    Person(int age);
    ~Person();
    //  通过自定义函数实现，自定义类型相加
    Person PPlusP(Person &p);
    //  通过成员函数重载加号
    Person operator+(Person &p);
    // 重载赋值运算符，解决浅拷贝问题
    Person& operator=(Person &p);
    // 重载==运算符
    bool operator==(Person &p);
    /* data */
    int m_A;
    int m_B;
    int *m_age;
private:
    int m_C;
    int m_D;
    
};

// 通过全局函数重载加号
Person operator+(Person &p1, int num);
// 左移运算符重载
ostream& operator<<(ostream& out, Person& p);



// 重载++
class MyINT
{
    
    friend ostream& operator<<(ostream& out, MyINT num);
public:
    MyINT(/* args */);
    ~MyINT();
    // 前置++
    MyINT& operator++();
    // 后置++
    MyINT operator++(int);
private:
    /* data */
    int m_A;
};

// 重载<<
ostream& operator<<(ostream& out, MyINT num);

// 函数调用运算符重载--仿函数
class MyPrint
{
public:
    MyPrint(/* args */);
    ~MyPrint();
    void operator()(string str);
private:
    /* data */
};

class MyADD
{
public:
    MyADD(/* args */);
    ~MyADD();
    int operator()(int a, int b);
private:
    /* data */
};


