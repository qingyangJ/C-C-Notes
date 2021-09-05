#include<iostream>

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


int main() {
    int a = 100;
    char b = 'j';
    fun0();
    fun0(a,b);
    fun0(b,a);
    fun1(a);
    fun1(999);
    return 0;
}