#include "Computer.h"
#include<iostream>
using namespace std;
// CPU
void IntelCPU::calculate() {
    cout<<"Intel's CPU"<<endl;
}
void LenCPU::calculate() {
    cout<<"Lenovo's CPU"<<endl;
}

// Vcard
void IntelVCard::display() {
    cout<<"Intel's display"<<endl;
}
void LenVCard::display() {
    cout<<"Lenovo's display"<<endl;
}

// Memory
void IntelMem::storage() {
    cout<<"Intel's storage"<<endl;
}
void LenMem::storage() {
    cout<<"Lenovo's storage"<<endl;
}


Computer::Computer(CPU *cpu, VideoCard *card,
                    Memory *memory)
{
    cout<<"Computer's constructor."<<endl;
    m_cpu = cpu;
    m_card = card;
    m_memory = memory;
    
}

Computer::~Computer()
{
    if(m_cpu != nullptr) {
        delete m_cpu;
        m_cpu = nullptr;
    }
    if(m_card != nullptr) {
        delete m_card;
        m_card = nullptr;
    }
    if(m_memory != nullptr) {
        delete m_memory;
        m_memory = nullptr;
    }
    cout<<"Computer's disconstructor."<<endl;
}

void Computer::assemble() {
    m_cpu->calculate();
    m_card->display();
    m_memory->storage();

}
