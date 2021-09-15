#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int X,A,B,result;
        cin>>X>>A>>B;
        result=A+(100-X)*B;
        cout<<result*10;
        cout<<"\n";
    }
    return 0;
}