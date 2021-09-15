#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(6);
    while (!s.empty())
    {
        cout<< s.top()<< endl;
        s.pop();
    }
    cout<<"------------------"<<endl;

    queue<string> q;
    q.push("sff");
    q.push("eff");
    q.push("swf");
    q.push("shf");
    q.push("yff");
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
}