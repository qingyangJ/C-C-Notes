#include<iostream>
#include<string>
using namespace std;

// string ���캯��
// string
void StringConstructor() {
    string s1;
    cout<<"str1 = "<<s1<<endl;
    const char* str = "string";
    string s2(str);
    cout<<"str2 = "<<s2<<endl;
    string s3(s2);
    cout<<"str3 = "<<s3<<endl;
    string s4(10, 'a');
    cout<<"str4 = "<<s4<<endl;
}
// string���� ��ֵ����
void StringAssign() {
    string str1;
    str1 = "string1";
    cout<<"str1: "<<str1<<endl;
    string str2;
    str2 = str1;
    cout<<"str2: "<<str2<<endl;
    char c = 'c';
    string str3;
    str3 = c;
    cout<<"str3: "<<str3<<endl;
    string str4;
    str4.assign("string4");
    cout<<"str4: "<<str4<<endl;
    string str5;
    str5.assign("abc", 2);
    cout<<"str5: "<<str5<<endl;
    string str6;
    str6.assign(str5);
    cout<<"str6: "<<str6<<endl;
    string str7;
    str7.assign(10, 'c');
    cout<<"str7: "<<str7<<endl;
}

// string �ַ���ƴ��
/*
    string& operator+=(const char *str); 
    string& operator+=(const char c); 
    string& operator+=(const string &str); 
    string& append(const char *s);
    string& append(const char *s, int n); // ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β��
    string& append(const string &s);
    string& append(const string &s, int pos, int n); // ���ַ���s�ĵ�posλ��ʼ��n���ַ����ӵ��ַ�����β��
*/
void StringAppend() {
    string str1;
    str1 += "str1";
    cout<<"str1: "<<str1<<endl;
    string str2;
    str2 += 'c';
    cout<<"str2: "<<str2<<endl;
    string str3;
    str3 += str1;
    cout<<"str3: "<<str3<<endl;
    string str4;
    str4.append("str4");
    cout<<"str4: "<<str4<<endl;
    string str5;
    str5.append("abcdefg", 5);
    cout<<"str5: "<<str5<<endl;
    string str6;
    str6.append(str5);
    cout<<"str6: "<<str6<<endl;
    string str7;
    str7.append(str6, 2, 3);
    cout<<"str7: "<<str7<<endl;
}

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
void StringFind() {
    string str = "abcdefghijklcdmn";
    char c = 'c';

    int ret = 0;
    ret = str.find("cd", 2);
    cout<<"pos: "<<ret<<endl;
    
    ret = str.rfind("cd");
    cout<<"pos: "<<ret<<endl;

    string str2;
    str2 = str.replace(2, 3, "EE");
    cout<<"str2: "<<str2<<endl;
}

// string�ַ����Ƚ�
/*
    �ַ����Ƚ��ǰ��ַ���ASCII����бȶԡ�
    int compare(const string &s) const; // ���ַ���s�Ƚ�
    int compare(const char *s) const; // 
*/
void StringCompare() {
    string str1("abc");
    string str2(str1);
    int ret = str1.compare(str2);
    cout<<"result: "<<ret<<endl;
}

// string �ַ���ȡ
/*
    char& operator[](int n); // ͨ��[]��ʽȡ�ַ�
    char& at(int n); // ͨ��at������ȡ�ַ�
*/
void StringAt() {
    string str;
    str = "abcdef";
    cout<<"str[1]: "<<str[1]<<endl;
    cout<<"str.at(1): "<<str.at(1)<<endl;
}

// string �����ɾ��
/*
    string& insert(int pos, const char *s);
    string& insert(int pos, const string &s); // �����ַ���
    string& insert(int pos, int n, char c); // ��ָ��λ�ò���n���ַ�c
    string& erase(int pos, int n = npos); // ɾ����pos��ʼ��n���ַ�

*/
void StringInsert() {
    string str("abcdef");
    str.insert(2, "EE");
    str.insert(1, 5, 'F');
    str.erase(4, 3);
    cout<<"str: "<<str<<endl;
}

// String �ִ�
/*
    ���ַ����л�ȡ��Ҫ���Ӵ���
    string substr(int pos = 0, int n = npos) const; // ������pos��ʼ��n���ַ���ɵ��ַ�����
*/
void StringSubstr() {
    string str("asdfghjk");
    str = str.substr(0, 3);
    cout<<"str: "<<str<<endl;
}
// len
void StringLen() {
    string name = "abcde";
    cout<<"name len: "<<name.length()<<endl;
}