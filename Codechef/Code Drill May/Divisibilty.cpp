#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        if (N%75==0)
        {
            cout<<"3\n";
        }
        else if (N%15==0)
        {
            cout<<"2\n";
        }
        else
        cout<<"1\n";
    }
    
}