#pragma once

class Cook
{
public:
    Cook();
    // 虚析构和纯虚析构virtual ~Cook()=0;，都要有实现
    // 解决子类中有堆区数据，而父类指针无法调用子类析构函数的情况
    virtual ~Cook();
    virtual void AddOil() = 0;
    virtual void AddFood() = 0;
    virtual void CookingFire() = 0;

    void CookFood();
};

class CookFish:public Cook
{
public:
    CookFish();
    ~CookFish();
    void AddOil();
    void AddFood();
    void CookingFire();
};

class CookChips:public Cook
{
public:
    void AddOil();
    void AddFood();
    void CookingFire();
};



