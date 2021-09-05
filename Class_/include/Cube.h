#pragma once

class Cube
{
public:
    void GetLen(double len);
    void GetWidth(double width);
    void GetHeight(double height);
    void CubeArea();
    void CubeVolume();
    void CompareCube(Cube &cube);
private:
    double m_length;
    double m_width;
    double m_height;
};

/*  Examples

    Cube c1, c2, c3;
    c1.GetLen(4);
    c1.GetWidth(5);
    c1.GetHeight(6);

    c2.GetLen(4);
    c2.GetWidth(5);
    c2.GetHeight(6);

    c3.GetLen(6);
    c3.GetWidth(7);
    c3.GetHeight(8);

    c2.CubeArea();
    c2.CubeVolume();
    c1.CompareCube(c2);
    c1.CompareCube(c3);*/
