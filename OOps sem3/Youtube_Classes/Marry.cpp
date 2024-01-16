//
// Created by khushi on 12/6/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string n;
    cin>>n;
    cin>>a;
    if(n== "m" && a>18 || n=="f"&&a>18){
        cout<<"yes marry";
    }
    else{
        cout<<"Dont marry";
    }
    return 0;
}