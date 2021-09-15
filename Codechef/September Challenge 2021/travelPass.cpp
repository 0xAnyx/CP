#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin>>s;
        int totalMin = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                totalMin+=a;
            }
            else{
                totalMin+=b;
            }
        }
        cout<<totalMin<<endl;
    }
}
