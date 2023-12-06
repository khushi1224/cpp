//
// Created by khushi on 12/5/2023.
//
// 1 2 3 4   // 2 1 4 3
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i+=2){
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i + 1] = temp;
     }

    for(int i = 0 ;i<n ; i++){
        cout<<arr[i];
    }
    cout<<" ";
    return 0;
}

