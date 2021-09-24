#include"Sort.h"


// 类模板中成员函数创建时机在调用阶段，导致分文件编写时链接不到。
// 解决：1.直接包含.cpp源文件
//      2. 将声明和实现写到同一个文件中并更改后缀为.hpp
// template<class T>
// void A<T>::Print(T m) {
//     cout<<"A de print"<<m<<endl;
// }
