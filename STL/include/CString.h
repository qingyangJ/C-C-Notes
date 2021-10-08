#pragma once

// string ���캯��
/*
    string();
    string(const char *s);
    string(const string &str);
    string(int n, char c);    
*/
void StringConstructor();

// string �ַ�����ֵ
/*
    string& operator=(const char* s); //char* �����ַ�������ֵ����ǰ���ַ�����
    string& operator=(const string &s); // ���ַ���s��ֵ����ǰ���ַ�����
    string& operator=(char c); // �ַ���ֵ����ǰ�ַ�����
    string& assign(const char* s); // ���ַ���s������ǰ���ַ�����
    string& assign(const char* s, int n); // ���ַ���s��ǰn���ַ�������ǰ���ַ�����
    string& assign(const string &s); // ���ַ���s������ǰ���ַ�����
    string& assign(int n, char c); // ��n���ַ�c������ǰ�ַ�����
*/
void StringAssign();

// string �ַ���ƴ��
/*
    string& operator+=(const char *str); 
    string& operator+=(const char c); 
    string& operator+=(const string &str); 
    string& append(const char *s);
    string& append(const char *s, int n);
    string& append(const string &s);
    string& append(const string &s, int pos, int n); // ���ַ���s�ĵ�posλ��ʼ��n���ַ����ӵ��ַ�����β��
*/
void StringAppend();

// string ���Һ��滻  ����ָ���ַ����Ƿ���ڣ���ָ����λ���滻�ַ�����
/*
    int find(const char *s, int pos = 0) const; // ����s��һ�γ��ֵ�λ�ã���pos��ʼ���ҡ�
    int find(const char *s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ�á�
    int find(const char c, int pos = 0) const; // �����ַ�c��һ�γ��ֵ�λ�á�
    int find(const string &str, int pos = 0) const; // ����str��һ�γ���λ�ã���pos��ʼ���ҡ�

    int rfind(const char *s, int pos = 0) const; // ����s���һ�γ��ֵ�λ�ã���pos��ʼ���ҡ�
    int rfind(const char *s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ����һ��λ�á�
    int rfind(const char c, int pos = 0) const; // �����ַ�c���һ�γ��ֵ�λ�á�
    int rfind(const string &str, int pos = 0) const; // ����str���һ�γ���λ�ã���pos��ʼ���ҡ�

    string& replace(int pos, int n, const string& str); // �滻��pos��ʼn���ַ�Ϊ�ַ���str��
    string& replace(int pos, int n, const char *s); // �滻��pos��ʼn���ַ�Ϊ�ַ���s��
*/
void StringFind();

// string�ַ����Ƚ�
/*
    �ַ����Ƚ��ǰ��ַ���ASCII����бȶԡ�
    int compare(const string &s) const; // ���ַ���s�Ƚ�
    int compare(const char *s) const; // 
*/
void StringCompare();

// string �ַ���ȡ
/*
    char& operator[](int n); // ͨ��[]��ʽȡ�ַ�
    char& at(int n); // ͨ��at������ȡ�ַ�
*/
void StringAt();

// string �����ɾ��
/*
    string& insert(int pos, const char *s);
    string& insert(int pos, const string &s); // �����ַ���
    string& insert(int pos, int n, char c); // ��ָ��λ�ò���n���ַ�c
    string& erase(int pos, int n = npos); // ɾ����pos��ʼ��n���ַ�
*/
void StringInsert();

// String �ִ�
/*
    ���ַ����л�ȡ��Ҫ���Ӵ���
    string substr(int pos = 0, int n = npos) const; // ������pos��ʼ��n���ַ���ɵ��ַ�����
*/
void StringSubstr();
// len
void StringLen();
