#include<iostream>
#include<string>
using namespace std;

#include "Sort.h"
#include "Array.hpp"

class Person1
{
public:
    void showPerson1();
};
void Person1::showPerson1() {
    cout<<"Person1"<<endl;
}

class Person2
{
public:
    void showPerson2();
};
void Person2::showPerson2() {
    cout<<"Person2"<<endl;
}

// ��ģ��---��;����һ��ͨ���࣬���еĳ�Ա���������Ϳ��Բ������ƶ�����һ�����������������
template <class T>
class Person
{
public:
    // ��Ա��������ʱ��---����ʱ�ٴ���
    void fun1() {
        obj.showPerson1();
    }
    void fun2() {
        obj.showPerson2();
    }
private:
    /* data */
    T obj;
};

// ����ģ��---��;����ߴ��븴����
void test01() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    char arr2[4] = {'a','b','c','d'};
    Sort(arr2);
}
// ��ģ��---��;
void test02() {
    Person<Person1> p1;
    p1.fun1();
    // p1.fun2();
}

// ��ģ�������Ϊ��������
template<class T1, class T2>
class Pet
{
public:
    Pet(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPet() {
        cout<<"name: "<<this->m_Name<<"     age: "<<m_Age<<endl;
    }
private:
    /* data */
    T1 m_Name;
    T2 m_Age;
};
// 1.ָ����������
void printPet1(Pet<string, int> &p) {
    p.showPet();
}
// 2.����ģ�廯
template<class T1, class T2>
void printPet2(Pet<T1, T2>&p) {
    p.showPet();
}
// 3.������ģ�廯
template<class T>
void printPet3(T &p) {
    p.showPet();
}

void test03(){
    Pet<string, int> p("jj", 22);
    printPet3(p);
}

// ��ģ����̳�
template<class T>
class Base {
public:
    T m;
};
// 1.����̳и��࣬����Ϊ��ģ��,�������ָ�����������
class Son1:public Base<int>
{
};
// 2.���벻ָ����������Ҳ��Ҫ����ģ�壬��ģ��̳���ģ�壬������T2ָ�������е�T����
template<class T1, class T2>
class Son2:public Base<T2>
{
public:
    Son2();
};
// 
void test04() {
    Son1 s1;
    Son2<int, int> s2;
}

// ģ���ڳ�Ա����������ʵ��
// Son2 �Ĺ��캯��
template<class T1, class T2>
Son2<T1, T2>::Son2() {
    cout<<typeid(T1).name()<<endl;
    cout<<typeid(T2).name()<<endl;
}

// ��ģ����ļ���д
void test05() {
    int b = 20;
    char c = 'c';
    A<int> a;
    a.Print(b);
    A<char> a2;
    a2.Print(c);
}

// ��ģ�����Ԫ
// �ñ�������ǰ֪��Friend��Ĵ��ڡ�
template<class T1, class T2>
class Friend;
// �ñ�������ǰ֪��printFriend1�Ĵ��ڡ�
template<class T1, class T2>
void printFriend1(Friend<T1, T2>&f) {
    cout<<"name: "<<f.m_Name<<"  age: "<<f.m_Age<<endl;
}
template<class T1, class T2>
class Friend
{   
    // ȫ�ֺ��� ����ʵ��
    friend void printFriend(Friend<T1, T2> &f) {
        cout<<"name: "<<f.m_Name<<"  age: "<<f.m_Age<<endl;
    }
    // ȫ�ֺ��� ����ʵ�� �Ӹ���ģ�����,����Ҫ�ñ�������ǰ֪����������Ĵ��ڡ�
    friend void printFriend1<> (Friend<T1, T2>&f);
public:
    Friend(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
private:
    T1 m_Name;
    T2 m_Age;
};

// 
void test06() {
    Friend<string, int> f1("Tk", 22);
    printFriend1(f1);
    
}
void printArray(Array<int> &arr) {
    for(int i = 0; i<arr.GetLen(); i++) {
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}
void test07() {
    Array<int> arr(10);
    for(int i = 0; i<9; i++) {
        arr.PushBack(i);
    }
    cout<<"arr print"<<endl;
    printArray(arr);
    cout<<"arr.Size: "<<arr.GetSize()<<endl;
    cout<<"arr.Len: "<<arr.GetLen()<<endl;
}

class Dog
{
public:
    Dog(){};
    Dog(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }
    /* data */
    string m_name;
    int m_age;
};

void printArray2(Array<Dog> &arr) {
    for(int i = 0; i<arr.GetLen(); i++) {
        cout<<arr[i].m_name<<"---age:"<<arr[i].m_age<<"   ";
    }
    cout<<endl;
}
void test08() {
    Array<Dog> arr(10);
    // ��ֵ
    Dog d1("lala",2);
    Dog d2("lili",3);
    Dog d3("lolo",4);
    Dog d4("uu",5);
    Dog d5("pp",1);
    arr.PushBack(d1);
    arr.PushBack(d2);
    arr.PushBack(d3);
    arr.PushBack(d4);
    arr.PushBack(d5);
    printArray2(arr);
    cout<<"arr.Size: "<<arr.GetSize()<<endl;
    cout<<"arr.Len: "<<arr.GetLen()<<endl;
}


int main() {
    test08();
   
    return 0;
}