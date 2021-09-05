#include "Circle.h"

void Circle::InputR(double r) {
    m_r = r;
}
double Circle::GetR() {
    return m_r;
}
double Circle::CalPerimeter() {
    return 2*PI*m_r;
}
void Circle::SetCenter(Point p) {
    m_center = p;
}
Point Circle::GetCenter() {
    return m_center;
}

