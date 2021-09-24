#pragma once

// 计算数组长度
template <typename T>
int Length(T &arr) {
    int len = 0;
    len = sizeof(arr)/sizeof(arr[0]);
    return len;
}

// 排序
template <typename T>
void Sort(T &arr) {
    int len = Length(arr);
    cout<<len<<endl;
    cout<<"before"<<endl;
    for(int i = 0; i<len; i++) {
        cout<<"  "<<arr[i];
    }

    for(int i = 0; i<len; i++) {
        for(int j = i+1; j<len; j++) {
            if(arr[i]<arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<endl<<"after"<<endl;
    for(int i = 0; i<len; i++) {
        cout<<"  "<<arr[i];
    }
}

template<class T>
class A
{
public:
    void Print(T m);
};

template<class T>
void A<T>::Print(T m) {
    cout<<"A de print"<<m<<endl;
}
