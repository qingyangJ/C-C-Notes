#include<iostream>
#include<string>
using namespace std;

// string 构造函数
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
// string容器 赋值操作
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

// string 字符串拼接
/*
    string& operator+=(const char *str); 
    string& operator+=(const char c); 
    string& operator+=(const string &str); 
    string& append(const char *s);
    string& append(const char *s, int n); // 把字符串s的前n个字符连接到当前字符串结尾。
    string& append(const string &s);
    string& append(const string &s, int pos, int n); // 从字符串s的第pos位开始的n个字符连接到字符串结尾。
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

// string字符串比较
/*
    字符串比较是按字符的ASCII码进行比对。
    int compare(const string &s) const; // 与字符串s比较
    int compare(const char *s) const; // 
*/
void StringCompare() {
    string str1("abc");
    string str2(str1);
    int ret = str1.compare(str2);
    cout<<"result: "<<ret<<endl;
}

// string 字符存取
/*
    char& operator[](int n); // 通过[]方式取字符
    char& at(int n); // 通过at方法获取字符
*/
void StringAt() {
    string str;
    str = "abcdef";
    cout<<"str[1]: "<<str[1]<<endl;
    cout<<"str.at(1): "<<str.at(1)<<endl;
}

// string 插入和删除
/*
    string& insert(int pos, const char *s);
    string& insert(int pos, const string &s); // 插入字符串
    string& insert(int pos, int n, char c); // 在指定位置插入n个字符c
    string& erase(int pos, int n = npos); // 删除从pos开始的n个字符

*/
void StringInsert() {
    string str("abcdef");
    str.insert(2, "EE");
    str.insert(1, 5, 'F');
    str.erase(4, 3);
    cout<<"str: "<<str<<endl;
}

// String 字串
/*
    从字符串中获取想要的子串。
    string substr(int pos = 0, int n = npos) const; // 返回由pos开始的n个字符组成的字符串。
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