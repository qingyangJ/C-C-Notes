#pragma once


// constructor
/*
    list<T> l;
    list(beg, end);
    list(n, elem);
    list(const list &l);
*/
void CListCon();
// assign
/*
    list& operator= (const list<T> &l);
    assign(n, elem);
    assign(beg, end);
    swap(l2); // ��l2Ԫ���뱾��Ԫ�ػ���
*/
void CListAssign();

// LIST size
/*
    size(); // ����������Ԫ�صĸ���
    empty();
    resize(num); // ����ָ����СΪNum
    resize(num, elem); // ����ָ����СΪnum, Ĭ��Ԫ��Ϊelem
*/
void CListSize();

// list insert del
/*
    push_back(elem);
    pop_back();
    push_front(elem);
    pop_front();

    insert(pos, elem); // pos l.begin();
    insert(pos, n, elem);
    insert(pos, beg, end); // ��posλ�ò���[beg, end)�������

    clear(); // �Ƴ���������������
    erase(pos); // ������һ�����ݵ�λ��
    erase(beg, end); // ɾ��[beg, end)��������ݣ�������һ�����ݵ�λ�á�
    remove(elem); // ɾ��������������elemƥ������ݡ�
*/
void CListInsertDel();

// list save
/*
    front(); // ���ص�һ��Ԫ��
    back(); // �������һ��Ԫ��
*/
void CListSave();
// list sort reverse
/*
    l.reverse(); // ��ת����
    l.sort(); // ��������  
    ���в�֧��������ʵ��������������������ñ�׼�㷨��
    ��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
*/
void CListSort();