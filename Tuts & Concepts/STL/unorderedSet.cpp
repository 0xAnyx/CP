/*Given N strings and Q queries, in eache query you are given a string print yes if string is present else print no.
N<=10e6
|S| <=100
Q<=10e6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string str1;
        cin>>str1;
        if(s.find(str1)==s.end()){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    
}