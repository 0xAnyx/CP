#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    float sum,sub,mult,div;
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    cout<<fixed<<setprecision(1)<<sum<<"\n";
    cout<<fixed<<setprecision(1)<<sub<<"\n";
    cout<<fixed<<setprecision(1)<<mult<<"\n";
    cout<<fixed<<setprecision(1)<<div<<"\n";
    return 0;
}