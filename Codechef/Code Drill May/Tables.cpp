#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for (int i = 1; i < 10; i++)
    {
        int mult;
        mult=N*i;
        cout<<mult;
        cout<<" -> ";
    }
    cout<<N*10;
    
}