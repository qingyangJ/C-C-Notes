#include "Friend.h"
#include<iostream>

Building::Building(/* args */) {
    m_bedRoom = "卧室";
    m_livingRoom = "客厅";
}

Building::~Building()
{
}

//  全局函数做友元
void myFriends(Building &building) {
    //  只有做Building的友元了才可以，访问私有成员
    std::cout<<"My friends can vist my"<<building.m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<building.m_bedRoom<<std::endl;
}
