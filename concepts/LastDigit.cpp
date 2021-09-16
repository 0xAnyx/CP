#include<bits/stdc++.h>
using namespace std;
int main(){
//Here the dilemma is that a number outside the range of long long int>10^18 has to be taken as string.
    string s;
    cin>>s;
    int last = (int)s[s.size()-1]-'0';//last is converted to int here as '0' gives ASCII of 0
    cout<<last;
}