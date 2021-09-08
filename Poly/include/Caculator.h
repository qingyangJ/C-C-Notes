#pragma once
#include<string>
#include<iostream>
using namespace std;
// 多态

// abstract base class
class AbstractCaculator
{
public:
    AbstractCaculator(/* args */);
    ~AbstractCaculator();
    virtual int GetResult();
    int m_m1;
    int m_m2;
};



class AddCaculator:public AbstractCaculator
{
public:
    AddCaculator(/* args */);
    ~AddCaculator();
    int GetResult();
};


