//
// Created by khushi on 12/10/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int S;
    cin>>S;
    int l[S];
    for(int i =0; i<S ;i++){
        cin>>l[i];
    }
    sort(l,l+S);

    map<int,int> mp;
    for(int i = 0 ; i<S ; i++){
        if(mp.count(l[i])){
            mp[l[i]]=mp[l[i]]+1;
        }
        else
            mp[l[i]]=1;
    }
    for(auto i : mp ){
        cout<<i.first<<" "<<i.second<<endl;
    }
    for(auto i :mp){
        if(i.second == 1){
            cout<<i.first<<endl;
        }
    }


























//     map<int,int> m;
//     for(int i =0 ;i<S;i++){
//         if(m.count(l[i])){
//             m[l[i]] = m[l[i]]+1;
//         }
//         else{
//             m[l[i]] = 1;
//         }
//     }
//    for(auto i:m){
//        cout<<i.first<<" "<<i.second<<endl;
//  }
//    for(auto i :m){
//        if(i.second ==1 ){
//            cout<<i.first<<endl;
//        }
//    }
    return 0;
}