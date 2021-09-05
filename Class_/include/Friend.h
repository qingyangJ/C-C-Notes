#pragma once
#include<string>

using namespace std;

class Building;

//  类做友元
class MyFriends
{
public:
    MyFriends();
    ~MyFriends();
    // 成员函数做友元
    void Vist();
    void Vist2();
    Building *m_b1;
private:
    /* data */

};

class Building
{
    //  友元
    friend void myFriends(Building &building);
    //  类做友元
    friend class MyFriends;
    //  成员函数做友元，类做友元了，其全部成员函数都可访问私有。
     friend void MyFriends::Vist();

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



