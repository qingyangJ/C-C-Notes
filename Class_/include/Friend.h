#pragma once
#include<string>

using namespace std;

class Building
{
    //  友元
    friend void myFriends(Building &building);

public:
    Building(/* args */);
    ~Building();

    string m_livingRoom;
private:
    /* data */
    string m_bedRoom;
};

//  全局函数做友元
void myFriends(Building &build);

//  类做友元
