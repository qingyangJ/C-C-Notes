#pragma once

// 一元谓词
class GreaterFive {
public:
    bool operator() (int val) {
        return val>5;
    }
};

void OnePred();

// 二元谓词同一元谓词---区别函数对象有两个参数。
