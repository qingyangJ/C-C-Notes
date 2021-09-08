#include "Dog.h"
#include<iostream>

Dog::Dog(/* args */):m_Dpub(0), m_Dpro(0), m_Dpri(0) {
    std::cout<<"Dog 的构造函数"<<std::endl;
}

Dog::~Dog() {
    std::cout<<"Dog 的析构函数"<<std::endl;
}

Keji::Keji() {
    std::cout<<"Keji 的构造函数"<<std::endl;

}
Keji::~Keji() {
    std::cout<<"Keji 的析构函数"<<std::endl;

}