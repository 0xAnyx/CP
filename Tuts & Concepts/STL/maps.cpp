#include<bits/stdc++.h>
using namespace std;
void printMap(map<int, string> &m){
    cout<< m.size() <<endl;
    for(auto &pr : m){
        cout<< pr.first<<" "<< pr.second<<endl;
    }
}
int main(){
    map<int, string> m;
    m[1] = "abc"; 
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m.insert({8, "fck"});
    // map<int, string> ::iterator it;
    // for ( it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    printMap(m);
    auto it = m.find(3);
    if(it!= m.end()){
        cout<<it->first<<" "<< it-> second<<endl;
    }
    auto it1 = m.find(8);
    if(it1 != m.end()){
        m.erase(it1);
    }
    printMap(m);
}