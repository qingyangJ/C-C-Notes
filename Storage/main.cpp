#include<iostream>
#include<string>

using namespace std;

/*
//  不要返回局部变量的地址，栈区生命周期：{}结束，编译器自动释放。
int *fun0() {
    int a = 10;
    return &a;
}*/

/* 
int g_a = 0;
static int g_s_a = 0;
const string g_c_str = "kk";
const int g_c_a = 0;*/

//  堆区开辟内存--生命周期：程序员主动释放，程序结束操作系统保底释放。
int *fun1() {
    // 利用new关键字
    int *p = new int(10);//  *P为局部指针，指向的内存在堆区，{}结束后所指空间不会被释放。
    return p;
}
int main() {
    /*  内存四区的位置关系：
    //  全局区：全局变量，静态变量，常量（字符串常量，全局常量）。  
    //  生命周期：程序结束，操作系统保底释放。
    int a = 0;
    static int s_a = 0;
    string c_str = "jk";
    const int c_a = 0;
    cout<<"&g_a="<<&g_a<<endl;
    cout<<"&g_s_a="<<&g_s_a<<endl;
    cout<<"&a="<<&a<<endl;
    cout<<"&s_a="<<&s_a<<endl;
    cout<<"&"nihao"="<<&"nihao"<<endl;
    cout<<"&c_str="<<&c_str<<endl;
    cout<<"&g_c_str="<<&g_c_str<<endl;
    cout<<"&c_a="<<&c_a<<endl;
    cout<<"&g_c_a="<<&g_c_a<<endl;*/

    //  返回了局部指针
    //  int *p = fun0();// 若第一次可以打印正确的数字，是因为编译器做了保留
    int *p = fun1();
    cout<<*p<<endl;
    cout<<*p<<endl;

    



    return 0;
}