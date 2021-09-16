#include<bits/stdc++.h>
using namespace std;
void printSet(multiset<string> &m){
    for(auto value: m){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("zed");
    s.insert("bcd");
    s.insert("abc");
    printSet(s);
    cout<<"--------"<<endl;
    auto it = s.find("abc");
    if(it!= s.end()){
        s.erase(it);
    }
    printSet(s);
}