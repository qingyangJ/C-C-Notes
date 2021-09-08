#include "Dog.h"
#include "Rhomb.h"

#include<iostream>

void test00() {
    // 子类继承父类，那么子类继承父类的共有内容到底在不在于子类对象中呢
    // 结论在子类对象中，都继承过来了，父类中私有未显示，被编译器隐藏了。
    // 未显示？那到底在哪里？
    // 继承中的对象模型
    Dog d1;
    Keji k1;
    std::cout<<"sizeof Dog:"<<sizeof(Dog)
            <<"---sizeof Keji:"<<sizeof(Keji)<<std::endl;
}
// 菱形继承--虚函数
void test01() {
    Mule m;
    m.Horse::m_age = 101;
    m.Donkey::m_age = 102;
    std::cout<<"Animal.m_age:"<<m.Animal::m_age<<std::endl;
    std::cout<<"m.m_age:"<<m.m_age<<std::endl;
    std::cout<<"Horse.m_age:"<<m.Horse::m_age<<std::endl;
}



int main(int argc, char* argv[]) {
    
    test00();
    

    return 0;
}