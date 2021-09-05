#include "Friend.h"
#include<iostream>


MyFriends::MyFriends():m_b1(nullptr) {
    m_b1 = new Building;
}

MyFriends::~MyFriends() {
}

void MyFriends::Vist() {
    std::cout<<"My friends can vist my"<<m_b1->m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<m_b1->m_bedRoom<<std::endl;
}
void MyFriends::Vist2() {
    std::cout<<"My friends can vist my"<<m_b1->m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<m_b1->m_bedRoom<<std::endl;
}
//  房子
Building::Building(/* args */) {
    m_bedRoom = "卧室";
    m_livingRoom = "客厅";
}

Building::~Building() {
}

//  全局函数做友元
void myFriends(Building &building) {
    //  只有做Building的友元了才可以，访问私有成员
    std::cout<<"My friends can vist my"<<building.m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<building.m_bedRoom<<std::endl;
}

