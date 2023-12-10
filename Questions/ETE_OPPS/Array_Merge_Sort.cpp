//
// Created by khushi on 12/9/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin>>n>>m;
    int arr[n], arr2[m] , res[n+m];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
        res[i]=arr[i];
    }
    int k = n;
    for(int i =0 ;i<m;i++){
        cin>>arr2[i];
        res[k]=arr2[i];
        k++;
    }

    sort(res,res+m+n);
    for(int i =0 ;i<n+m;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}