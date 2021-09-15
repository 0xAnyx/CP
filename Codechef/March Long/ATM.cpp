#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int with;
    float bal;
    cin>>with>>bal;
    float final=with+0.50;
    if (with%5!=0 || final>bal)
    {
        cout<<fixed<<setprecision(2)<<bal;
    }
    else{
        cout<<fixed<< setprecision(2)<<bal-final;
    }
    return 0;
    
}