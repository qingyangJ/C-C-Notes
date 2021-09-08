#include "Poly.h"
#include<iostream>


// BASE
Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}
void Animal::speak() {
    std::cout<<"Animal speak."<<std::endl;
}
// 

Bird::Bird(/* args */)
{
}

Bird::~Bird()
{
}
void Bird::speak() {
    std::cout<<"Bird speak."<<std::endl;
}
//
Cat::Cat(/* args */)
{
}

Cat::~Cat()
{
}
void Cat::speak() {
    std::cout<<"Cat speak."<<std::endl;
}