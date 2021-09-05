#pragma once

#include "Point.h"

//  圆周率
const double PI = 3.14;
//  求周长方法，半径
class Circle
{
public:
    void InputR(double r);
    double GetR();
    double CalPerimeter();
    void SetCenter(Point p);
    Point GetCenter();
private:
    double m_r;
    Point m_center;
};

/*  Examples

    Circle c1;
    c1.InputR(5);
    cout<<"Perimeter: "<<c1.CalPerimeter()<<endl;
    Point p1, p2;
    p1.SetX(2);
    p1.SetY(2);
    p2.SetX(6);
    p2.SetY(6);
    c1.SetCenter(p1);
    PointToCir(c1, p1);
    
void PointToCir(Circle &c, Point &p);
    
void PointToCir(Circle &cir, Point &p) {
    double distanc = sqrt(pow(cir.GetCenter().GetX()-p.GetX(), 2)+
        pow(cir.GetCenter().GetY()-p.GetY(), 2));
    if(distanc < cir.GetR()) {
        std::cout<<"Point in the circle."<<std::endl;
    }
    if(distanc == cir.GetR()) {
        std::cout<<"Point on the circle."<<std::endl;
    }
    if(distanc > cir.GetR()) {
        std::cout<<"Point outside the circle."<<std::endl;
    }
}*/

