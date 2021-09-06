#include<iostream>
#include "Operator.h"

using namespace std;


//  重载： 三个条件： 同一作用域，同一函数名，参数的类型，个数，顺序不同
void fun0() {
    cout<<"fun0()"<<endl;
}
void fun0(int a, char b) {
    cout<<"fun(int a, int b)"<<endl;
}
void fun0(char a, int b) {
    cout<<"fun(int b, int a)"<<endl;
}
/*  注意事项：
    1.函数返回值不能作为重载的条件。
    2.引用做函数参数，int &a 和 const int &a可构成重载，原因编译器可从参数合法角度进行区分。
    3.避免使用默认参数来重载，因为调用时会产生二义性。
*/
void fun1(int &a) {
    cout<<"fun1(int &a)"<<endl;
}

void fun1(const int &a) {
    cout<<"fun1(const int &a)"<<endl;
}

void test0() {
    int a = 100;
    char b = 'j';
    fun0();
    fun0(a,b);
    fun0(b,a);
    fun1(a);
    fun1(999);
}
//  operator+ 运算符重载
void test01() {
    Person p1,p2;
    int num = 100;
    Person p3 = p2.PPlusP(p1);
    cout<<"p1.m_A:"<<p1.m_A<<"------p1.m_B:"<<p1.m_B<<endl;
    cout<<"p2.m_A:"<<p2.m_A<<"------p2.m_B:"<<p2.m_B<<endl;
    cout<<"p3.m_A:"<<p3.m_A<<"------p3.m_B:"<<p3.m_B<<endl;
    cout<<"----------------------------------------"<<endl;
    Person p4 = (p1+p2);
    cout<<"p1.m_A:"<<p1.m_A<<"------p1.m_B:"<<p1.m_B<<endl;
    cout<<"p2.m_A:"<<p2.m_A<<"------p2.m_B:"<<p2.m_B<<endl;
    cout<<"p4.m_A:"<<p4.m_A<<"------p4.m_B:"<<p4.m_B<<endl;
    cout<<"----------------------------------------"<<endl;
    Person p5 = p1+num;
    cout<<"p1.m_A:"<<p1.m_A<<"------p1.m_B:"<<p1.m_B<<endl;
    cout<<"p2.m_A:"<<p2.m_A<<"------p2.m_B:"<<p2.m_B<<endl;
    cout<<"p5.m_A:"<<p5.m_A<<"------p5.m_B:"<<p5.m_B<<endl;
}
// 左移运算符重载（输出重载）
void test02() {
    Person p1;
    cout<<p1<<endl;
}
// 重载++
void test03() {
    MyINT m1,m2;
    cout<<m1<<endl;
    ++(++m1);
    cout<<++m1<<endl;

    cout<<m2++<<endl;
    m2++;
    cout<<m2<<endl;
}
// 赋值运算符重载,编译器自带的是浅拷贝，遇到堆区会崩溃。
void test04() {
    Person p1(22);
    Person p2(23);
    p1 = p2;
    cout<<"p1.m_age:"<<*p1.m_age<<endl;
    cout<<"p2.m_age:"<<*p2.m_age<<endl;
    // 等号运算符重载
    if(p1 == p2) {
        cout<<"m_age are same."<<endl;
    }
    
}
// 仿函数
void test05() {
    MyPrint m1;
    m1("HELLO :)");
    // 也可使用匿名对象,直接返回仿函数结果。
    cout<<MyADD()(100, 88)<<endl;
}


int main() {
    test05();
    // (a++)++;
    // ++(++a);
    

    return 0;
}