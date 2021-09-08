#include "Poly.h"
#include "Caculator.h"
#include "Cook.h"

#include<iostream>

// 多态--虚函数（静态多态，动态多态）
// 父类引用指向子类对象
void doSpeak(Animal &a) {
    a.speak();
}

void test00() {
    // 静态多态--编译期间函数地址就已确定
    Bird b;
    doSpeak(b);
    // 动态多态--虚函数
    // 构成：有继承关系，子类重写父类的虚函数，父类指针或引用指向子类对象。

}
// 多态--
void test01() {
    // 父类指针指向子类对象
    AbstractCaculator *a = new AddCaculator;
    a->m_m1 = 88;
    a->m_m2 = 100;
    cout<<a->m_m1<<"+"<<a->m_m2<<"="<<a->GetResult()<<endl;
    delete a;
    a = nullptr;
    // 父类引用指向子类对象
    AddCaculator add;
    AbstractCaculator &a2 = add;
    a2.m_m1 = 99;
    a2.m_m2 = 101;
    cout<<a2.m_m1<<"+"<<a2.m_m2<<"="<<a2.GetResult()<<endl;
}

void test02() {
    // 
    Cook *c = new CookFish;
    c->CookFood();
    // c = new CookChips;
    // c->CookFood();
    delete c;
    c = nullptr;

}
int main () {
    test02();
    return 0;
}
 