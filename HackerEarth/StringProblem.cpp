#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int vowels(string str)
{
    int hash[5]={0};
    for (int i = 0; i < str.length(); i++) {
  
        if (str[i] == 'A' || str[i] == 'a')
            hash[0] = 1;
  
        else if (str[i] == 'E' || str[i] == 'e')
            hash[1] = 1;
  
        else if (str[i] == 'I' || str[i] == 'i')
            hash[2] = 1;
  
        else if (str[i] == 'O' || str[i] == 'o')
            hash[3] = 1;
  
        else if (str[i] == 'U' || str[i] == 'u')
            hash[4] = 1;
    }

    for (int i = 0; i < 5; i++) {
        if (hash[i] == 0) {
            return 1;
        }
    }
    return 0 ;  
}

int result(string str)
{
    if(vowels(str))
    {
        cout<<"ugly string\n";
    }
    else
    {
      cout<<"lovely string\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        result(str);
    }
}