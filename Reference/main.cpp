#include<iostream>

using namespace std;

void swap(int& a, int& b) {
    a = a+b;
    b = a-b;
    a = a-b;
}

// //  不能返回局部变量的引用
// int& fun1() {
//     int a = 11;
//     return a;
// }

int& fun2() {
    static int s_a = 12;
    return s_a;
}

int main() {
    //1.  基本用法
    // int a = 0;
    // int b = 10;
    // int &ref_0 = a;
    // cout<<"a:"<<a<<"----ref_0:"<<ref_0<<endl; //  a:0  ref_0:0

    //2.  引用必须初始化，一旦初始化后不可修改
    //  int &ref_1;  // F
    //  int &ref_1 = a;
    //  int &ref_1 = b;  // F previously declared in 23
    //  ref_1 = b;  // 通过别名被赋值b。
    //  cout<<"a:"<<a<<"------"<<"ref_1:"<<ref_1<<endl; //  a:10 ref_1:10

    //3.  引用做函数参数
    // cout<<"before: a:"<<a<<"---b:"<<b<<endl;
    // swap(a,b);
    // cout<<"after : a:"<<a<<"---b:"<<b<<endl;
    
    //4.  引用做函数的返回值
    int &ref_2 = fun2();  //  返回引用
    cout<<"ref_2: "<<ref_2<<endl;
    fun2() = 1000;  //  函数做左值
    cout<<"ref_2: "<<ref_2<<endl;
    //  引用的本质是 指针常量  int &ref == int* const ref;
    //  常量引用：const int &ref,用于保护传入函数的形参不被改变。
    return 0;
}