#include<iostream>
#include<vector>
using namespace std;

#include"CVector.h"


void PrintVec(vector<int> &v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<"  ";
    }
    cout<<endl;
}
// ���캯��
void VectorConstructor() {
    // Ĭ�Ϲ���
    vector<int> v1;
    for(int i = 0; i<10; i++) {
        v1.push_back(i*2);
    }
    // ͨ�����䷽ʽ���й���
    vector<int> v2(v1.begin(), v1.end());
    // ��n��elemcopy������
    vector<int> v3(5, 10);
    // copy����
    vector<int> v4(v3);
    PrintVec(v4);
}
// ��ֵ����
/*
    vector& operator=(const vector &vec);
    assign(v.begin(), v.end());
    assign(n, elem);
*/
void VectorAssign() {
    vector<int> v1(3,6);
    vector<int> v2;
    v2 = v1;
    v2.assign(v1.begin(), v1.end());
    v1.assign(3,8);
    PrintVec(v1);
    PrintVec(v2);
}
// ��С
/*
    empty();
    capacity();
    size(); // ����������Ԫ�صĸ���
    resize(int num);
    resize(int num, elem); // elemĬ��ֵ
*/
void VectorSize() {
    vector<int> v1(10,8);
    cout<<"is emty: "<<v1.empty()<<endl;
    cout<<"capacity(): "<<v1.capacity()<<endl;
    cout<<"size(): "<<v1.size()<<endl;
    PrintVec(v1);

    v1.resize(11, 9);
    cout<<"capacity(): "<<v1.capacity()<<endl;
    cout<<"size(): "<<v1.size()<<endl;
    PrintVec(v1);
}
// ����ɾ��
/*
    // ��������ɾ��
    push_back(elem); // �Ӻ����һ��
    pop_back(); // �Ӻ�ɾ��һ��
    insert(const_iterator pos, elem); // posλ�ò���elem
    insert(const_iterator pos, int count, elem); // posλ�ò���n��elem
    erase(const_iterator pos); // ɾ��posλ�õ�elem
    erase(const_iterator start , const_iterator end); // ɾ��������Ԫ��
    clear(); // ɾ������Ԫ��
    ע�� v1.end()��vector�����һ��Ԫ����һ��λ�ã��ͷŸ�λ�ûᵼ�´���
*/
void VectorInsertDel() {
    vector<int> v1(10, 6);
    v1.push_back(7);
    v1.pop_back();
    v1.insert(v1.begin()+2, 10);
    v1.insert(v1.begin(), 2, 8);
    PrintVec(v1);
    v1.erase(v1.end()-1);
    PrintVec(v1);
    v1.erase(v1.begin()+1, v1.end());
    PrintVec(v1);
    v1.clear();
    PrintVec(v1);
}

// ��ȡ
/*
    v.at(2);
    v[2];
    v.front(); // ��һ��Ԫ��
    v.back(); // ���һ��Ԫ��
    v.last(); // ���һ��
*/
void VectorAt() {
    vector<int> v1(4,2);
    v1.push_back(5);
    PrintVec(v1);
    cout<<"v1.at(4): "<<v1.at(4)<<endl;
    cout<<"v1[4]: "<<v1[4]<<endl;
    cout<<"v1.front(): "<<v1.front()<<endl;
    cout<<"v1.back() "<<v1.back()<<endl;
}

// vector����
/*
    swap(vector); // ��vector�뱾���Ԫ�ػ���
*/
void VectorSwap() {
    vector<int> v1(3, 2);
    vector<int> v2(2, 3);
    cout<<"v1: ";
    PrintVec(v1);
    cout<<"v2: ";
    PrintVec(v2);
    v1.swap(v2);
    cout<<"v1: ";
    PrintVec(v1);
    cout<<"v2: ";
    PrintVec(v2);
}
// vector Ԥ���ռ�--�൱�����������MAX_SIZE����Ԥ����λ�ò���ʼ�����Ҳ��ɷ��ʡ�
void VectorReserve() {
    vector<int> v;
    // v.reserve(10000);
    int num = 0; // ͳ�ƿռ俪�ٵĴ���
    int *p = nullptr;
    for(int i =0; i<10000; i++) {
        v.push_back(i);
        if(p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout<<"num: "<<num<<endl;
}