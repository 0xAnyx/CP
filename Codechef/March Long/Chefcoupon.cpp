#include<iostream>
using namespace std;

void func()
{
    int delivery,coupon;
    cin>>delivery>>coupon;
    int bill=0;
    for (int i = 0; i < 2; i++)
    {
      int a,b,c;
      cin>>a>>b>>c;
      if (a+b+c>=150)
      {
        
      }
        else
        {
            bill+=delivery;
        }
    }
    if (bill+coupon<delivery*2)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    cout<<"\n";
    
}

signed main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        func();
    }
    return 0;
    
}