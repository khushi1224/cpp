//
// Created by khushi on 12/6/2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int s , arr[s];
    cin>>s;
    for(int i =0 ; i < s ; i++){
        cin>>arr[i];
    }
//    for(auto i:arr){
//        cout<<i<<endl;
//    }
//    sort(arr,arr+s);
//    int count =1; //1 1 2 2 2 3
//    int max_count;
//    int temp;
//    for(int i =0 ;i<s ;i++){
//        if(arr[i]==arr[i+1]){
//            count++;
//            max_count = count;
//            temp = arr[i];
//        }
//
//        else{
//            count = 1 ;
//        }
//
//
//    }
//    cout<<max_count<<" "<<temp;
 map<int,int>mp;
    for(int i=0;i<s;i++){
        if(mp.count(arr[i])){
           //present h
           mp[arr[i]]=mp[arr[i]]+1;
        }
        else{
            //present nahi h
            mp[arr[i]]=1;
        }
    }
//    for(auto i:mp){
//        cout<<i.first<<" "<<i.second<<endl;
//    }
int ans=0;
     for(auto i:mp ){
         ans=max(i.second,ans);
     }
     cout<<ans<<endl;

}