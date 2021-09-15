#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a<=23)
    {
        if (b>=500 && b<=1000)
        {
            cout<<"Take Medicine";
        }
        else{
            cout<<"Don't take Medicine";
        }
        
    }
    else{
        cout<<"Don't take medicine";
    }
    return 0;
}