#include "Caculator.h"


AbstractCaculator::AbstractCaculator(/* args */):m_m1(0),m_m2(0)
{
}

AbstractCaculator::~AbstractCaculator()
{
}
int AbstractCaculator::GetResult() {
    return 0;
}

AddCaculator::AddCaculator(/* args */)
{
}

AddCaculator::~AddCaculator()
{
}

int AddCaculator::GetResult() {
    // +
        return m_m1+m_m2;
}
