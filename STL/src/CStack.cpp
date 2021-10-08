#include"CStack.h"
#include<iostream>
#include<stack>

using namespace std;

void StackDemo() {
    stack<int> s;
    if(s.empty()) {
        cout<<"stack is empty"<<endl;
    }
    int i = 10;
    while (i--)
    {
        /* code */
        s.push(i);
    }
    s.pop();
    cout<<"s.top: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    
    stack<int> s2(s);
    
    if(s2.empty()) {
        cout<<"stack is empty"<<endl;
    }
}