#pragma once
#include<vector>




void PrintVec(vector<int> &v);
// ���캯��
void VectorConstructor();
// ��ֵ����
/*
    vector& operator=(const vector &vec);
    assign(v.begin(), v.end());
    assign(n, elem);
*/
void VectorAssign();
// ��С
/*
    empty();
    capacity();
    size(); // ����������Ԫ�صĸ���
    resize(int num);
    resize(int num, elem); // elemĬ��ֵ
*/
void VectorSize();
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
*/
void VectorInsertDel();
// ��ȡ
/*
    v.at(2);
    v[2];
    v.front(); // ��һ��Ԫ��
    v.back(); // ���һ��Ԫ��
    v.last(); // ���һ��
*/
void VectorAt();
// vector����
/*
    swap(vector); // ��vector�뱾���Ԫ�ػ���
*/
void VectorSwap();
// vector Ԥ���ռ�--�൱�����������MAX_SIZE����Ԥ����λ�ò���ʼ�����Ҳ��ɷ��ʡ�
void VectorReserve();