#include<bits/stdc++.h>
using namespace std;
void printSet(set<string> &s){
    for(auto value: s){
        cout<<value<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");//log(n)
    s.insert("zcd");
    s.insert("ced");
    auto it = s.find("abc");
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }
    printSet(s);
}