#pragma once


class Point
{
public:
    Point() {
        std::cout<<"Point���캯��"<<std::endl;
    }
    ~Point() {
        std::cout<<"Point��������"<<std::endl;
    }
    void SetX(double x);
    double GetX();
    void SetY(double y);
    double GetY();
private:
    double m_x;
    double m_y;
};