#include "Cube.h"

#include<iostream>
void Cube::GetLen(double len) {
    if(len>0 ) {
        m_length = len;
    }
}
void Cube::GetWidth(double width) {
    if(width>0) {
        m_width = width;
    }
}
void Cube::GetHeight(double height) {
    if(height>0) {
        m_height = height;
    }
}
void Cube::CubeArea() {
    std::cout<<"CubeArea: "<<
        (m_length*m_width+m_length*m_height+m_width*m_height)*2<<std::endl;
}
void Cube::CubeVolume() {
    std::cout<<"CubeVolume: "<<
        m_length*m_width*m_height<<std::endl;
}
void Cube::CompareCube(Cube &cub) {
    if(cub.m_length == m_length && cub.m_width == m_width && cub.m_height == m_height) {
        std::cout<<"These two cubes are same."<<std::endl;
    } else {
        std::cout<<"These two cubes are different."<<std::endl;
    }
}