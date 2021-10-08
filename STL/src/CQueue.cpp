#include"CQueue.h"
#include<iostream>
#include<queue>

using namespace std;

void QueueDemo() {
    queue<int> q;
    if(q.empty()) {
        cout<<"queue iq empty"<<endl;
    }
    int i = 10;
    while (i--)
    {
        /* code */
        q.push(i);
    }
    q.pop();
    cout<<"q.front: "<<q.front()<<endl;
    cout<<"q.back: "<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;
    
    queue<int> q2(q);
    
    if(q2.empty()) {
        cout<<"queue is empty"<<endl;
    }
}