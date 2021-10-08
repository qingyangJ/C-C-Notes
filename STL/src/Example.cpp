#include"Example.h"
#include<iostream>

#include<string>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>
#include<ctime>
using namespace std;

Person::Person() {};
Person::Person(string name, int sorce) {
    this->m_name = name;
    this->m_sorce = sorce;
};
Person::~Person() {};

// mark
void Mark(vector<Person> &v) {
    srand((unsigned)time(NULL));
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        // deque
        deque<int> d;
        cout<<"选手"<<it->m_name<<"的打分：";
        for(int i = 0; i<10 ; i++) {
            // 0~100
            int sorce = rand()%101;
            cout<<sorce<<" ";
            d.push_back(sorce);
        }
        cout<<endl;
        // sort
        sort(d.begin(), d.end());
        // del max and min
        d.pop_front();
        d.pop_back();
        // average
        int sum = 0;
        int average = 0;
        for(deque<int>::iterator it = d.begin(); it != d.end(); it++) {
            sum += *it;
        }
        average = sum/d.size();
        it->m_sorce = average;
    }
}

// SHOW
void showSorce(vector<Person> &v) {
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<it->m_name<<"'s sorce: "<<it->m_sorce<<endl;
    }
}

// SORT 按年龄进行排序，如果年龄相同按身高进行排序
Dog::Dog(/* args */) {
    
}
Dog::Dog(string name, int age, int height) {
    this->m_name = name;
    this->m_age = age;
    this->m_height = height;
}

Dog::~Dog() {
}

bool com(Dog &d1, Dog &d2) {
    if(d1.m_age == d2.m_age) {
        return d1.m_height<d2.m_height;
    } else {
        return d1.m_age<d2.m_age;
    }
}
void ListSortDemo() {
    list<Dog> L;
    Dog d1("A", 1, 2);
    Dog d2("B", 3, 1);
    Dog d3("C", 2, 2);
    Dog d4("D", 3, 3);
    Dog d5("E", 7, 4);
    Dog d6("F", 6, 7);
    Dog d7("G", 5, 9);

    L.push_back(d1);
    L.push_back(d2);
    L.push_back(d3);
    L.push_back(d4);
    L.push_back(d5);
    L.push_back(d6);
    L.push_back(d7);

    for(list<Dog>::iterator it = L.begin(); it != L.end(); it++) {
        cout<<"name :"<<(*it).m_name<<"  age:"<<(*it).m_age<<"  height:"
            <<(*it).m_height<<endl;
    }
    // 排序
    L.sort(com);
    cout<<"sorted"<<endl;
    for(list<Dog>::iterator it = L.begin(); it != L.end(); it++) {
        cout<<"name :"<<(*it).m_name<<"  age:"<<(*it).m_age<<"  height:"
            <<(*it).m_height<<endl;
    }
}

