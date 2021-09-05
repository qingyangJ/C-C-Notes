#pragma once


class Cla
{
public:
    Cla();
    void show1();
    /*  常函数-本质const修饰的是this指针。this指针本质 指针常量（不可修改指针指向）
        1.函数内不可以修改成员属性。成员属性默认是this指针指向，
            故常函数的成员属性this指针既不能修改指向也不能修改内容。
            const Cla* const this
        2.在定义成员属性时加mutable关键字，便可访问。
    */
    void show2() const;
    int m_A;
    mutable int m_B;
};




