#pragma once

class CPU
{
public:
    // virtual ~CPU()=0;
    virtual void calculate() = 0;
};
// intel
class IntelCPU:public CPU
{
public:
    // ~IntelCPU();
    void calculate();
};

// lenovo
class LenCPU:public CPU
{
public:
    // ~LenCPU();
    void calculate();
};

//
class VideoCard
{
public:
    // virtual ~VideoCard()  = 0;
    virtual void display() = 0;
};
// intel
class IntelVCard:public VideoCard
{
public:
    // ~IntelVCard();
    void display();
};
// lenvov
class LenVCard:public VideoCard
{
public:
    // ~LenVCard();
    void display();
};


class Memory
{
public:
    // virtual ~Memory() = 0;
    virtual void storage() = 0;
};
// intel
class IntelMem:public Memory
{
public:
    // ~IntelMem();
    void storage();
};
// lenvov
class LenMem:public Memory
{
public:
    // ~LenMem();
    void storage();
};



class Computer
{
public:
    Computer(CPU *cpu, VideoCard *card,
                    Memory *memory);
    ~Computer();
    void assemble();
private:
    /* data */
    CPU *m_cpu;
    VideoCard *m_card;
    Memory *m_memory;
};





