#include<iostream>

#include<vector>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

template<typename T>
void print(T v) {
    cout<<v<<" ";
}

template<typename T>
void printVec(vector<T> &v) {
    for_each(v.begin(), v.end(), print<T>);
}

class Dog {
public:
    Dog(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};
// Ä£°åµÄÖØÔØ
template<> void print(Dog d) {
    cout<<"name:"<<d.m_name<<" age:"<<d.m_age<<endl;
}


void test01() {
    vector<int> v1(3,2);
    printVec<int>(v1);
    vector<char> v2(3, 's');
    printVec<char>(v2);
}
void test02() {
    Dog d1("lili", 2);
    Dog d2("xixi", 4);
    vector<Dog> v1;
    v1.push_back(d1);
    v1.push_back(d2);
    printVec<Dog>(v1);
}

int main() {

    // test02();
    list<int> l;
    list<int>::iterator it = l.begin();
    it++;
    it = it + 1;


    return 0;
}