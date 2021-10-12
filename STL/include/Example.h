#pragma once
#include<string>
#include<vector>
#include<list>
#include<map>


class Person
{
public:
    Person(/* args */);
    Person(std::string name, int sorce);
    ~Person();
    std::string m_name;
    int m_sorce;
};

// mark
void Mark(std::vector<Person> &v);
// SHOW
void showSorce(std::vector<Person> &v);

// sort
class Dog {
public:
    Dog(/* args */);
    Dog(std::string name, int age, int height);
    ~Dog();
    std::string m_name;
    int m_age;
    int m_height;
};

bool com(Dog &d1, Dog &d2);
void ListSortDemo();

// ·Ö×é
class Employee {
public:
    Employee() {

    }
    Employee(std::string name, int salary) {
        this->m_name = name;
        this->m_salary = salary;
    }
    std::string m_name;
    int m_salary;
};

void CreateEmployee(std::vector<Employee> &V);
void SetGroup(std::vector<Employee> &V, std::multimap<int, Employee> &M);
void ShowByGroup(std::multimap<int, Employee> &M);
void Grouping();
