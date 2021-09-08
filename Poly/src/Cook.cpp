#include "Cook.h"
#include<iostream>
using namespace std;

Cook::Cook() {
    cout<<"Cook 的构造函数"<<endl;
}
Cook::~Cook() {
    cout<<"Cook 的析构函数"<<endl;
}

void Cook::CookFood() {
    cout<<"Cooking Food :)"<<endl;
    AddOil();
    AddFood();
    CookingFire();
}

CookFish::CookFish()
{
    cout<<"CookFish 的构造函数"<<endl;
}
CookFish::~CookFish()
{
    cout<<"CookFish 的析构函数"<<endl;
}
void CookFish::AddOil() {
    cout<<"Add a little oil."<<endl;
}
void CookFish::AddFood() {
    cout<<"Add a fish."<<endl;
}
void CookFish::CookingFire() {
    cout<<"The minimum fire "<<endl;
}

void CookChips::AddOil() {
    cout<<"Add a lot oil."<<endl;
}
void CookChips::AddFood() {
    cout<<"Add some chips."<<endl;
}
void CookChips::CookingFire() {
    cout<<"The middle fire "<<endl;
}

