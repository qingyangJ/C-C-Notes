#pragma once


// 继承的访问权限，降权限，权限越来越小
// public继承，pub和pro 成员权限不变的继承过来，pri成员不可访问。、
// protected继承, 降权，父类pub继承过来变protected成员，父类protected继承过来保持pro，pri成员不可访问
// privated继承，降权，父类pub和pro继承过来变为privated成员，父类pri不可访问。

class Dog
{
public:
    Dog(/* args */);
    ~Dog();
    int m_Dpub;
protected:
    int m_Dpro;
private:
    int m_Dpri;
};
// // PUB
// class Keji:public Dog
// {
// public:
//     Keji(/* args */);
//     ~Keji();
//     // 除了私有的，pub和pro均可访问，那私有的会不会也继承过来？只是不能访问？
//     int m_Kpub = m_Dpub;
// protected:
//     int m_Kpro = m_Dpro;
// private:
//     /* data */
//     // int m_Kpri = m_Dpri;
// };
// class BianMu:public Keji
// {
// private:
//     /* data */
//     int m_Bpub = m_Dpub;
//     int m_Bpro = m_Dpro;
//     int m_Bpri = m_Dpri;
// public:
//     BianMu(/* args */);
//     ~BianMu();
// };
// // PRO
// class Keji:protected Dog
// {
// public:
//     Keji(/* args */);
//     ~Keji();
//     // 除了私有的，pub和pro均可访问，那私有的会不会也继承过来？只是不能访问？
//     int m_Kpub = m_Dpub;
// protected:
//     int m_Kpro = m_Dpro;
// private:
//     /* data */
//     int m_Kpri = m_Dpri;
// };
// class BianMu:public Keji
// {
// private:
//     /* data */
//     // 
//     int m_Bpub = m_Dpub;
//     int m_Bpro = m_Dpro;
//     int m_Bpri = m_Dpri;
// public:
//     BianMu(/* args */);
//     ~BianMu();
// };
// PRI
class Keji:private Dog
{
public:
    Keji();
    ~Keji();
    // 除了私有的，pub和pro均可访问，那私有的会不会也继承过来？只是不能访问？
    // 子类从父类继承过来的成员，到底属不属于子类对象中呢？
    int m_Kpub = m_Dpub;
protected:
    int m_Kpro = m_Dpro;
private:
    /* data */
    // int m_Kpri = m_Dpri;
};
// class BianMu:public Keji
// {
// private:
//     /* data */
//     // 
//     int m_Bpub = m_Dpub;
//     int m_Bpro = m_Dpro;
//     int m_Bpri = m_Dpri;
// public:
//     BianMu(/* args */);
//     ~BianMu();
// };






