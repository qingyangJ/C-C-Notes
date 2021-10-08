#pragma once

// string 构造函数
/*
    string();
    string(const char *s);
    string(const string &str);
    string(int n, char c);    
*/
void StringConstructor();

// string 字符串赋值
/*
    string& operator=(const char* s); //char* 类型字符串，赋值给当前的字符串。
    string& operator=(const string &s); // 把字符串s赋值给当前的字符串。
    string& operator=(char c); // 字符赋值给当前字符串。
    string& assign(const char* s); // 把字符串s赋给当前的字符串。
    string& assign(const char* s, int n); // 把字符串s的前n个字符赋给当前的字符串。
    string& assign(const string &s); // 把字符串s赋给当前的字符串。
    string& assign(int n, char c); // 用n个字符c赋给当前字符串。
*/
void StringAssign();

// string 字符串拼接
/*
    string& operator+=(const char *str); 
    string& operator+=(const char c); 
    string& operator+=(const string &str); 
    string& append(const char *s);
    string& append(const char *s, int n);
    string& append(const string &s);
    string& append(const string &s, int pos, int n); // 从字符串s的第pos位开始的n个字符连接到字符串结尾。
*/
void StringAppend();

// string 查找和替换  查找指定字符串是否存在，在指定的位置替换字符串。
/*
    int find(const char *s, int pos = 0) const; // 查找s第一次出现的位置，从pos开始查找。
    int find(const char *s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置。
    int find(const char c, int pos = 0) const; // 查找字符c第一次出现的位置。
    int find(const string &str, int pos = 0) const; // 查找str第一次出现位置，从pos开始查找。

    int rfind(const char *s, int pos = 0) const; // 查找s最后一次出现的位置，从pos开始查找。
    int rfind(const char *s, int pos, int n) const; //从pos位置查找s的前n个字符最后一次位置。
    int rfind(const char c, int pos = 0) const; // 查找字符c最后一次出现的位置。
    int rfind(const string &str, int pos = 0) const; // 查找str最后一次出现位置，从pos开始查找。

    string& replace(int pos, int n, const string& str); // 替换从pos开始n个字符为字符串str。
    string& replace(int pos, int n, const char *s); // 替换从pos开始n个字符为字符串s。
*/
void StringFind();

// string字符串比较
/*
    字符串比较是按字符的ASCII码进行比对。
    int compare(const string &s) const; // 与字符串s比较
    int compare(const char *s) const; // 
*/
void StringCompare();

// string 字符存取
/*
    char& operator[](int n); // 通过[]方式取字符
    char& at(int n); // 通过at方法获取字符
*/
void StringAt();

// string 插入和删除
/*
    string& insert(int pos, const char *s);
    string& insert(int pos, const string &s); // 插入字符串
    string& insert(int pos, int n, char c); // 在指定位置插入n个字符c
    string& erase(int pos, int n = npos); // 删除从pos开始的n个字符
*/
void StringInsert();

// String 字串
/*
    从字符串中获取想要的子串。
    string substr(int pos = 0, int n = npos) const; // 返回由pos开始的n个字符组成的字符串。
*/
void StringSubstr();
// len
void StringLen();
