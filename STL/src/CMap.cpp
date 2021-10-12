#include"CMap.h"

#include<map>
#include<iostream>
using namespace std;



class Cat {
public:
    Cat(string name, int age);
    string m_name;
    int m_age;
};
Cat::Cat(string name, int age) {
    this->m_name = name;
    this->m_age = age;
}
class CmpDog {
public:
    bool operator() (const Cat &d1, const Cat &d2) {
        return d1.m_age>d2.m_age;
    }
};
// map 排序是依据键值， 若想对值进行排序，可将值存入vector使用sort
void CMapConstruct() {
    map<Cat, int, CmpDog> mp;
    Cat d1(string("Tu"), 2);
    Cat d2(string("Ti"), 7);
    Cat d3(string("To"), 5);

    mp.insert(pair<Cat, int>(d1, 1));
    pair<Cat, int> p(d2, 2);
    mp.insert(p);
    mp.insert(make_pair(d3, 3));
    for(map<Cat, int, CmpDog>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout<<"key name:"<<(*it).first.m_name<<"  age:"<<it->first.m_age<<" value:"<<it->second<<endl;
    }
}