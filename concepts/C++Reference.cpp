#include<bits/stdc++.h>
using namespace std;
void increment(int &n){
    n++;
}
int main(){
    int a=3;
    cout<<a<<endl;
    // a = increment(a); This will give error since increment function does not return anything,
    // yet we are expecting a result i.e. a=....
    increment(a);
    cout<<a<<endl;
    // Now both time 3 is returned when only int n is passed increment function as here a copy of a is passed i.e Pass by value and main value of a does not change since it is in main function. For changing value of a outside the function also we must use ther concept of call by reference thereby using a & sign before.
}