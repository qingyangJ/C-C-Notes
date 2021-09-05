#include<iostream>
#include<math.h>

#include "Circle.h"
#include "Cube.h"
#include "Point.h"
#include "Person.h"
#include "ClaConst.h"
#include "Friend.h"


using namespace std;


/* 封装：
    访问权限：public protected private 

*/


//
void play() {
    cout<<"play:"<<endl;
    //  构造函数调用方式。
    //  括号法
    Person p1;//  调用默构造
    Person p2(18,99); //  调用参数构造
    Person p3(p2); //  调用拷贝构造
    cout<<"p3:"<<p3.m_age<<endl;
}
//  拷贝构造函数的调用时机
//  已创建对象来初始化一个新对象
void test01() {
    Person p1(20,99);
    Person p2(p1);
}
//  值传递方式给函数参数传参
void doWork(Person p) {

}

void test02() {
    Person p1;
    doWork(p1);
}
//  值方式返回局部对象
Person doWork2() {
    Person p1;
    cout<<"doWork2:"<<&p1<<endl;
    return p1;
}
void test03() {
    Person p = doWork2();
    cout<<"test03:"<<&p<<endl;
}


//  构造函数调用规则： 不写的话默认提供三种，若写有参了，就不提供默认无参构造了，若写拷贝了，默认的就什么都不提供了。

//  深浅拷贝
void test04() {
    Person p1(18,20);
    cout<<"p1.height:"<<*p1.m_height<<endl;
    Person p2(p1);
    cout<<"p2.height:"<<*p2.m_height<<endl;
}

//  初始化列表-- 可用在其他函数吗 NO
void test05() {
    Person p5;
    cout<<"m_A:"<<p5.m_A<<"---m_B:"<<p5.m_B<<"---m_C:"<<p5.m_C<<endl;
    Person P5(33,22,11);
    cout<<"m_A:"<<P5.m_A<<"---m_B:"<<P5.m_B<<"---m_C:"<<P5.m_C<<endl;
}
//  静态成员变量和静态成员函数
void test06() {
    Person P6;
    cout<<"m_D:"<<Person::m_S<<endl;
    P6.fun1();
    Person::fun1();
    cout<<"m_D:"<<Person::m_S<<endl;
}
//  对象的内存分配
void test07() {
    Size s7;
    cout<<"sizeof(s7):"<<sizeof(s7)<<endl;
    Person P7;
    cout<<"sizeof(P7):"<<sizeof(P7)<<endl;
    Struct_S s1;
    cout<<"sizeof(s1):"<<sizeof(s1)<<endl;
}
// 常函数与常对象
void test08() {
    //  1.常对象与常函数一致，都不可改变成员属性。2.常对象仅仅能调用常函数。
    const Cla c1;
    //  c1.m_A = 10;
    c1.m_B = 12;
    c1.show2();
}
// 友元
void test09() {
    // Building b1;
    // myFriends(b1);
    MyFriends m1;
    m1.Vist();

}

int main() {
    test09();
    return 0;
}



