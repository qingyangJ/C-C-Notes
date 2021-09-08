#pragma once

// BASE
class Animal {
private:
    /* data */
public:
    Animal(/* args */);
    ~Animal();
    virtual void speak();
};

// 
class Bird:public Animal
{
private:
    /* data */
public:
    Bird(/* args */);
    ~Bird();
    void speak();
};

// 
class Cat
{
private:
    /* data */
public:
    Cat(/* args */);
    ~Cat();
    void speak();
};



