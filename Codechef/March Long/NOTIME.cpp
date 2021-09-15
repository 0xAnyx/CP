#include<iostream>
using namespace std;


int main()
{
    int N,H,X,flag=0,a[100];
    cin>>N>>H>>X;
    for (int i = 0; i < N ; i++)
    {
        cin>>a[i];
        if (H==X+a[i])
        {
            flag=1;
        }
        
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;   
}