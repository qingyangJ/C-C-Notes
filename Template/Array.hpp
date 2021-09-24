#pragma once


template<class T>
class Array
{
public:
    // 有参构造
    Array(int Size) {
        this->m_Len = 0;
        this->m_Size = Size;
        this->pAddress = new T[this->m_Size];
    }
    // 拷贝构造
    Array(const Array &arr) {
        this->m_Size = arr.m_Size;
        this->m_Len = arr.m_Len;
        this->pAddress = new T[this->m_Size];
        for(int i =0; i<this->m_Len; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }
    // operator= 防止浅拷贝问题
    Array& operator=(const Array& arr) {
        // 先判断原来堆区是否有数据，有则释放
        if(this->pAddress != nullptr) {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Len = 0;
            this->m_Size = 0;
        }
        // 深拷贝
        this->m_Size = arr.m_Size;
        this->m_Len = arr.m_Len;
        this->pAddress = new T[this->m_Size];
        for(int i =0; i<this->m_Len; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    } 

    // 析构函数
    ~Array() {
        if(this->pAddress != nullptr) {
            delete []this->pAddress;
            this->pAddress = nullptr;
        }
    }
    // 尾插法
    void PushBack(const T &val) {
        // 判断容量
        if(this->m_Len == this->m_Size) {
            return;
        }
        this->pAddress[this->m_Len] = val;
        this->m_Len++;
    }
    // 尾删法
    void PopBack() {
        if(this->m_Len == 0) {
            return;
        }
        this->m_len--;
    }
    // 通过下标的方式访问数据
    T& operator[](int index) {
        return this->pAddress[index];
    }
    // 返回数组容量
    int GetLen() {
        return this->m_Len;
    }
    // 返回数组大小
    int GetSize() {
        return this->m_Size;
    }
private:
    int m_Len;
    int m_Size;
    T *pAddress;

};


