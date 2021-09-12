#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>


using namespace std;
// 向文件写内容
void test00() {
    // 创建文件流对象；ifstream读 ofstream 写 fstream 读写
    ofstream ofs;
    // 文件路径-打开文件
    ofs.open("./file0", ios::out);
    // 写入数据
    ofs<<"The first line.";
    ofs.close();
    // 二进制的方式写文件
    char a[10] = "la ni hao";
    ofs.open("./file1", ios::out | ios::binary);
    ofs.write((const char*)a, sizeof(a));
    ofs.close();
}

// 从文件读取内容
void test01() {
    char buf[20] = {0};
    ifstream ifs;
    // ifs.open("./file0", ios::in);
    // if(!ifs.is_open()) {
    //     cout<<"File open error"<<endl;
    // }
    // 1.
    // while (ifs >> buf)
    // {
    //     cout<<buf<<" ";
    // }
    // // 2
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     cout<<buf<<" ";
    // }
    // // 3
    // string str;
    // while (getline(ifs, str))
    // {
    //     cout<<str<<" ";
    // }
    // // 4
    // char c;
    // while ((c = ifs.get())!= EOF)
    // {
    //     cout<<c<<" ";
    // }
    // 二进制方式读
    ifs.open("./file1", ios::in | ios::binary);
    if(!ifs.is_open()) {
        cout<<"File open error"<<endl;
    }
    ifs.read(buf, sizeof(buf));
    cout<<buf;
    ifs.close();
}

// sstream
struct PersonInfo
{
    string name;
    vector<string> phones;
};
bool valid(const string &s) {
    return true;
}
string format(const string &s) {
    return s;
}
// 读入stringstream
void test02 (){
    // line保存来自输入的一行，word单词
    string line, word;
    vector<PersonInfo> people; // 存放person的记录
    ifstream record("./file2");
    // // 逐行读取，直至cin遇到文件尾或其他错
    // while (getline(cin, line)) {
    //     PersonInfo info; 
    //     istringstream record(line); //读取输入行
    //     record >> info.name; // 读取名字
    //     while (record >> word) // 读取电话号
    //     {
    //         info.phones.push_back(word);
    //     }
    //     people.push_back(info);
    // }
    while (record >> line) {
        PersonInfo info; 
        istringstream record(line); //读取输入行
        record >> info.name; // 读取名字
        while (record >> word) // 读取电话号
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    // record.close();
    // 输出
    ostringstream os;
    for(const auto &entry : people) {
        ostringstream formatted, badNums;
        for(const auto &nums : entry.phones) {
            if(!valid(nums)) {
                badNums<< " "<< nums;// 将数的字符串形式存入badNum
            } else {
                // 将格式化的字符串 “写入” formatted
                formatted << " "<< format(nums);
            }
        }
        if(badNums.str().empty()) {
            os << entry.name<< " "<<formatted.str() <<endl;
        } else {
            cerr << "input error: "<< entry.name<< "invalid numbers "<<
                    badNums.str()<<endl; 
        }
    }
    cout<<os.str()<<endl;;
}


int main() {


    test02();


    return 0;
}