#pragma once


class Animal {
public:
    Animal();
    ~Animal();
    int m_age;
};


// 马
class Horse:virtual public Animal
{
public:
    Horse(/* args */);
    ~Horse();
private:
    /* data */
};


// 驴
class Donkey:virtual public Animal
{
public:
    Donkey(/* args */);
    ~Donkey();
private:
    /* data */
};
// 骡
class Mule:public Horse, public Donkey
{
public:
    Mule(/* args */);
    ~Mule();
private:
    /* data */
};




