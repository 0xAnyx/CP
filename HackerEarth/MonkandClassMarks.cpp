//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, multiset<string>> marks_map;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }
    //Reversing the map
    // auto it = (--marks_map.end());
    // while (true)
    // {
    //     auto &students = (*it).second;
    //     int marks = (*it).first;
    //     for(auto student: students){
    //         cout<< student << " "<<marks << endl;
    //     }
    //     if(it == marks_map.begin()){
    //         break;
    //     }
    //     else{
    //         it--;
    //     }
    // }
    for(auto &pr: marks_map){
        auto &students = pr.second;
        int marks = pr.first;
        for(auto &student: students){
            cout<<student<<" "<< (-1*marks)<< endl;
        }
    }
    
}