#include<iostream>
#include<random>
#include<ctime>


using namespace std;


// RANDOM
// C
void CRandom() {
    // ������
    srand(time(NULL));
    cout<<rand()%10<<endl;
    cout<<(double)(rand()%10+1)/1000<<endl;
}
// C++
void RandomNum() {
    // ����������Ǹ����������࣬����unsigned��
    default_random_engine e;
    // �������� 1.ֱ�ӳ�ʼ������ʱ��ֵ e(112121313); 2.���������seed��Ա e.seed(1231231);
    // �������ӳ���ϵͳ���� time
    e.seed(time(0));
    // ʹ��
    cout<<e()<<endl;
    // �ֲ����ͺ����棬 ���ȷֲ�
    uniform_int_distribution<unsigned> u(0,9);
    cout<<u(e)<<endl;
    cout<<u(e)<<endl;
    // �����ֲ�
    // �������ʵ��������������[0,1)֮���ʵ��
    uniform_real_distribution<double> u2(0,1);
    cout<<u2(e)<<endl;
}


int main() {
    CRandom();
    // RandomNum();
    return 0;
}