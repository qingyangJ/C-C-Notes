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
//  ����
Building::Building(/* args */) {
    m_bedRoom = "����";
    m_livingRoom = "����";
}

Building::~Building() {
}

//  ȫ�ֺ�������Ԫ
void myFriends(Building &building) {
    //  ֻ����Building����Ԫ�˲ſ��ԣ�����˽�г�Ա
    std::cout<<"My friends can vist my"<<building.m_livingRoom<<std::endl;
    std::cout<<"My friends can vist my"<<building.m_bedRoom<<std::endl;
}

