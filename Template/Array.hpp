#pragma once


template<class T>
class Array
{
public:
    // �вι���
    Array(int Size) {
        this->m_Len = 0;
        this->m_Size = Size;
        this->pAddress = new T[this->m_Size];
    }
    // ��������
    Array(const Array &arr) {
        this->m_Size = arr.m_Size;
        this->m_Len = arr.m_Len;
        this->pAddress = new T[this->m_Size];
        for(int i =0; i<this->m_Len; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }
    // operator= ��ֹǳ��������
    Array& operator=(const Array& arr) {
        // ���ж�ԭ�������Ƿ������ݣ������ͷ�
        if(this->pAddress != nullptr) {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Len = 0;
            this->m_Size = 0;
        }
        // ���
        this->m_Size = arr.m_Size;
        this->m_Len = arr.m_Len;
        this->pAddress = new T[this->m_Size];
        for(int i =0; i<this->m_Len; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    } 

    // ��������
    ~Array() {
        if(this->pAddress != nullptr) {
            delete []this->pAddress;
            this->pAddress = nullptr;
        }
    }
    // β�巨
    void PushBack(const T &val) {
        // �ж�����
        if(this->m_Len == this->m_Size) {
            return;
        }
        this->pAddress[this->m_Len] = val;
        this->m_Len++;
    }
    // βɾ��
    void PopBack() {
        if(this->m_Len == 0) {
            return;
        }
        this->m_len--;
    }
    // ͨ���±�ķ�ʽ��������
    T& operator[](int index) {
        return this->pAddress[index];
    }
    // ������������
    int GetLen() {
        return this->m_Len;
    }
    // ���������С
    int GetSize() {
        return this->m_Size;
    }
private:
    int m_Len;
    int m_Size;
    T *pAddress;

};


