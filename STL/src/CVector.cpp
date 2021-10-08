#include<iostream>
#include<vector>
using namespace std;

#include"CVector.h"


void PrintVec(vector<int> &v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}
// 构造函数
void VectorConstructor() {
    // 默认构造
    vector<int> v1;
    for(int i = 0; i<10; i++) {
        v1.push_back(i*2);
    }
    // 通过区间方式进行构造
    vector<int> v2(v1.begin(), v1.end());
    // 将n个elemcopy给本身
    vector<int> v3(5, 10);
    // copy构造
    vector<int> v4(v3);
    PrintVec(v4);
}
// 赋值操作
/*
    vector& operator=(const vector &vec);
    assign(v.begin(), v.end());
    assign(n, elem);
*/
void VectorAssign() {
    vector<int> v1(3,6);
    vector<int> v2;
    v2 = v1;
    v2.assign(v1.begin(), v1.end());
    v1.assign(3,8);
    PrintVec(v1);
    PrintVec(v2);
}
// 大小
/*
    empty();
    capacity();
    size(); // 返回容器中元素的个数
    resize(int num);
    resize(int num, elem); // elem默认值
*/
void VectorSize() {
    vector<int> v1(10,8);
    cout<<"is emty: "<<v1.empty()<<endl;
    cout<<"capacity(): "<<v1.capacity()<<endl;
    cout<<"size(): "<<v1.size()<<endl;
    PrintVec(v1);

    v1.resize(11, 9);
    cout<<"capacity(): "<<v1.capacity()<<endl;
    cout<<"size(): "<<v1.size()<<endl;
    PrintVec(v1);
}
// 插入删除
/*
    // 单个插入删除
    push_back(elem); // 从后插入一个
    pop_back(); // 从后删除一个
    insert(const_iterator pos, elem); // pos位置插入elem
    insert(const_iterator pos, int count, elem); // pos位置插入n个elem
    erase(const_iterator pos); // 删除pos位置的elem
    erase(const_iterator start , const_iterator end); // 删除区间内元素
    clear(); // 删除所有元素
    注： v1.end()是vector中最后一个元素下一个位置，释放该位置会导致错误。
*/
void VectorInsertDel() {
    vector<int> v1(10, 6);
    v1.push_back(7);
    v1.pop_back();
    v1.insert(v1.begin()+2, 10);
    v1.insert(v1.begin(), 2, 8);
    PrintVec(v1);
    v1.erase(v1.end()-1);
    PrintVec(v1);
    v1.erase(v1.begin()+1, v1.end());
    PrintVec(v1);
    v1.clear();
    PrintVec(v1);
}

// 存取
/*
    v.at(2);
    v[2];
    v.front(); // 第一个元素
    v.back(); // 最后一个元素
    v.last(); // 最后一个
*/
void VectorAt() {
    vector<int> v1(4,2);
    v1.push_back(5);
    PrintVec(v1);
    cout<<"v1.at(4): "<<v1.at(4)<<endl;
    cout<<"v1[4]: "<<v1[4]<<endl;
    cout<<"v1.front(): "<<v1.front()<<endl;
    cout<<"v1.back() "<<v1.back()<<endl;
}

// vector互换
/*
    swap(vector); // 将vector与本身的元素互换
*/
void VectorSwap() {
    vector<int> v1(3, 2);
    vector<int> v2(2, 3);
    cout<<"v1: ";
    PrintVec(v1);
    cout<<"v2: ";
    PrintVec(v2);
    v1.swap(v2);
    cout<<"v1: ";
    PrintVec(v1);
    cout<<"v2: ";
    PrintVec(v2);
}
// vector 预留空间--相当于设置数组的MAX_SIZE，但预留的位置不初始化，且不可访问。
void VectorReserve() {
    vector<int> v;
    // v.reserve(10000);
    int num = 0; // 统计空间开辟的次数
    int *p = nullptr;
    for(int i =0; i<10000; i++) {
        v.push_back(i);
        if(p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout<<"num: "<<num<<endl;
}