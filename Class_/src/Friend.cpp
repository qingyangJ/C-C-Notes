#include "Friend.h"
#include<iostream>

Building::Building(/* args */) {
    m_bedRoom = "����";
    m_livingRoom = "����";
}

Building::~Building()
{
}

//  ȫ�ֺ�������Ԫ
void myFriends(Building &building) {
    //  ֻ����Building����Ԫ�˲ſ��ԣ�����˽�г�Ա
    std::cout<<"My friends can vist my"<<building.m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<building.m_bedRoom<<std::endl;
}
