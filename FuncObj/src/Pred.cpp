#include"Pred.h"

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


void OnePred() {
    vector<int> v;
    int i = 7;
    while (i--) {
       v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if(it == v.end()) {
        cout<<"not found"<<endl;
    } else {
        cout<<*it<<endl;
    }
}