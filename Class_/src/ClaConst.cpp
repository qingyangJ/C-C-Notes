#include "ClaConst.h"

Cla::Cla() {
    
}
void Cla::show1() {
    m_A = 100;
}
void Cla::show2() const {
    //  
    //m_A = 99;
    m_B = 88;
}