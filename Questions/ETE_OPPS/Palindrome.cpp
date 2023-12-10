//
// Created by khushi on 12/10/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r , newN = 0 ;
    int oldN = n;
    while(n!=0){
        r = n % 10 ;
        newN = (newN*10) + r;
        n = n / 10 ;
    }
    if(oldN == newN){
        cout<<"P";
    }
    else
        cout<<"not P";
    return 0;
}