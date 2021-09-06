#include "Operator.h"


Person::Person()
        :m_A(100), m_B(99), m_C(88), m_D(77), m_age(nullptr) {
    
}
Person::Person(int age) {
    m_age = new int(age);
}

Person::~Person() {
    if(m_age != nullptr) {
        delete m_age;
        m_age = nullptr;
    }
}

//  函数方式实现自定义类型相加
Person Person::PPlusP(Person &p) {
    Person temp;
    temp.m_A = this->m_A+p.m_A;
    temp.m_B = this->m_B+p.m_B;
    return temp;
}
//  通过成员函数重载加号
Person Person::operator+(Person &p) {
    Person temp;
    temp.m_A = this->m_A+p.m_A;
    temp.m_B = this->m_B+p.m_B;
    return temp;
}
//  通过全局函数重载加号
Person operator+(Person &p1, int num) {
    Person temp;
    temp.m_A = p1.m_A+num;
    temp.m_B = p1.m_B+num;
    return temp;
}
//  左移运算符重载
ostream& operator<<(ostream& out, Person& p) {
    out<<"p.m_C:"<<p.m_C<<endl;
    out<<"p.m_D:"<<p.m_D<<endl;
    return out;
}
// 重载赋值运算符，解决浅拷贝问题
Person& Person::operator=(Person &p) {
    m_A = p.m_A;
    m_B = p.m_B;
    m_C = p.m_C;
    m_D = p.m_D;
    // 先释放干净，再拷贝
    if(m_age != nullptr) {
        delete m_age;
        m_age = nullptr;
    }
    m_age = new int(*p.m_age);
    return *this;
}
// 重载==运算符
bool Person::operator==(Person &p) {
    if(*this->m_age == *p.m_age) {
        return true;
    }
    return false;
}
// 重载++
MyINT::MyINT(/* args */):m_A(55)
{
}

MyINT::~MyINT()
{
}
// 前置++
MyINT& MyINT::operator++() {
    // 先计算后返回
    ++m_A;
    return *this;
}
// 后置++
MyINT MyINT::operator++(int) {
    // 先记录结果后计算再返回记录的结果
    MyINT temp = *this;
    m_A++;
    return temp;
}

// 重载<<
ostream& operator<<(ostream& out, MyINT num) {
    out<<"MyINT.m_A:"<<num.m_A;
    return out;
}

//  
MyPrint::MyPrint(/* args */)
{
}

MyPrint::~MyPrint()
{
}
void MyPrint::operator()(string str){
    cout<<str<<endl;
}


MyADD::MyADD(/* args */)
{
}

MyADD::~MyADD()
{
}
int MyADD::operator()(int a, int b) {
    return a+b;
}