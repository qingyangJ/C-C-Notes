#include"Func.h"

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
#include<cmath>
using namespace std;

void Arithmetic() {
    plus<int> add;
    cout<<"plus:"<<add(10, 20)<<endl;
    minus<int> sub;
    cout<<"minus:"<<sub(10, 20)<<endl;
    multiplies<int> mul;
    cout<<"multiplies:"<<mul(10, 20)<<endl;
    divides<double> div;
    cout<<"divides:"<<div(10, 20)<<endl;
    negate<int> neg;
    cout<<"negate:"<<neg(10)<<endl;
}

void Relational() {
    equal_to<int> equal;
    if(equal(10,10)) {
        cout<<"equal"<<endl;
    } else {
        cout<<"not equal"<<endl;
    }
    vector<int> v;
    int i = 9;
    while (i--) {
        v.push_back(i*2);
    }
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl<<"after sort"<<endl;
    sort(v.begin(), v.end(), less<int>());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<"  ";
    }
}

void Logical() {
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(false);
    v.push_back(false);
    for(vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
    // 利用逻辑非 将容器V搬运到容器v2中，并执行取反操作。
    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
    for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
        cout<<*it<<"  ";
    }
}

// less
void print01(int v) {
    cout<<v<<" ";
}
class print02 {
public:
    void operator() (int v) {
        cout<<v<<" ";
    }
};
void ForEach() {
    vector<int> v;
    int i = 9;
    while (i--) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print01);
    for_each(v.begin(), v.end(), print02());   
}

// TRANSFORM
class Transform {
public:
    int operator() (int v) {
        return v+100;
    }
};
void Trans() {
    vector<int> v1;
    int i = 9;
    while (i--) {
        v1.push_back(i*2);
    }
    vector<int> v2;
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), Transform());
    for_each(v2.begin(), v2.end(), print01);
}

class Dog {
public:
    Dog(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
    bool operator== (const Dog &d) {
        if(this->m_name == d.m_name && this->m_age == d.m_age) {
            return true;
        } else {
            return false;
        }
    }
};

class Cmp {
public:
    bool operator() (Dog &d1, Dog &d2) {
        if(d1.m_age < d2.m_age){
            return true;
        } else {
            return false;
        }
    }
};
void Find() {
    Dog d1("lala", 2);
    Dog d2("sasa", 4);
    Dog d3("xixi", 3);
    vector<Dog> v;
    v.push_back(d1);
    v.push_back(d2);
    v.push_back(d3);
    Dog d("lala", 3);
    vector<Dog>::iterator  it = find(v.begin(), v.end(), d1);
    if(it != v.end()) {
        cout<<"found dog:"<<it->m_name<<"  age:"<<it->m_age<<endl;
    } else {
        cout<<"not found"<<endl;
    }
    Dog d4("xixi", 3);
    it = adjacent_find(v.begin(), v.end());
    if(it != v.end()) {
        cout<<"found adjacnet dog:"<<it->m_name<<"  age:"<<it->m_age<<endl;
    } else {
        cout<<"not found adjacent"<<endl;
    }
    v.push_back(d4);
    it = adjacent_find(v.begin(), v.end());
    if(it != v.end()) {
        cout<<"found adjacnet dog:"<<it->m_name<<"  age:"<<it->m_age<<endl;
    } else {
        cout<<"not found adjacent"<<endl;
    }

    // 
    sort(v.begin(), v.end(), Cmp());
    for(vector<Dog>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<"Dog name:"<<it->m_name<<"  age:"<<it->m_age<<endl;
    }
    vector<int> v2;
    int i = 9;
    while (i--) {
        v2.push_back(i);
    }
    sort(v2.begin(), v2.end(), greater<int>());
    bool ret = binary_search(v2.begin(), v2.end(), 5);
    cout<<"ret:"<<ret<<endl;
    if(ret) {
        cout<<"exist"<<endl;
    } else {
        cout<<"inexistence"<<endl;
    }
    int num = count(v.begin(), v.end(), d4);
    cout<<"count num:"<<num<<endl;
}

class Greater8{
public:
    bool operator() (int v) {
        return v>8;
    }
};
void Count() {
    vector<int> v(100, 8);
    int num = count(v.begin(), v.end(), 8);
    cout<<"count num:"<<num<<endl;
    v.push_back(10);
    num = count_if(v.begin(), v.end(), Greater8());
    cout<<"count num:"<<num<<endl;
}

void SortFunc() {
    vector<int> v;
    int i = 9;
    while (i--) {
        v.push_back(i);
    }
    random_shuffle(v.begin(), v.end());
    sort(v.begin(), v.end());
    vector<int> v2(v);
    vector<int> v3;
    v3.resize(v.size()+v2.size());
    merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
    reverse(v3.begin(), v3.end());
    for_each(v3.begin(), v3.end(), print01);
}

void CopyFunc() {
    vector<int> v;
    int i = 10;
    while (i--) {
        v.push_back(i);
    }
    vector<int> v2;
    v2.resize(v.size());
    copy(v.begin(), v.end(), v2.begin());
    replace(v2.begin(), v2.end(), 2, 99);
    replace_if(v2.begin(), v2.end(), Greater8(), 99);
    swap(v, v2);
    for_each(v2.begin(), v2.end(), print01);
    
}

void Numeric() {
    vector<int> v;
    int i = 10;
    while (i--) {
        v.push_back(i);
    }
    int total = accumulate(v.begin(), v.end(), 0);
    cout<<"total:"<<total<<endl;
    fill(v.begin()+1, v.end(), 21);
    for_each(v.begin(), v.end(), print01);
}

void UnionFunc() {
    vector<int> v1,v2,v3;
    int i = 10;
    while (i--) {
        v1.push_back(i);
    }
    sort(v1.begin(), v1.end());
    int j = 5;
    while (j--) {
        v2.push_back(j);
    }
    sort(v2.begin(), v2.end());
    v3.resize(min(v1.size(), v2.size()));
    vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(),
        v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), itEnd, print01);
}