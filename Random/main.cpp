#include<iostream>
#include<random>
#include<ctime>


using namespace std;


// RANDOM
// C
void CRandom() {
    // 设种子
    srand(time(NULL));
    cout<<rand()%10<<endl;
    cout<<(double)(rand()%10+1)/1000<<endl;
}
// C++
void RandomNum() {
    // 随机数引擎是个函数对象类，生成unsigned数
    default_random_engine e;
    // 设置种子 1.直接初始化引擎时赋值 e(112121313); 2.调用引擎的seed成员 e.seed(1231231);
    // 设置种子常用系统函数 time
    e.seed(time(0));
    // 使用
    cout<<e()<<endl;
    // 分布类型和引擎， 均匀分布
    uniform_int_distribution<unsigned> u(0,9);
    cout<<u(e)<<endl;
    cout<<u(e)<<endl;
    // 其他分布
    // 生成随机实数，常用来生成[0,1)之间的实数
    uniform_real_distribution<double> u2(0,1);
    cout<<u2(e)<<endl;
}


int main() {
    CRandom();
    // RandomNum();
    return 0;
}