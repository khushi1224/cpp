#include<iostream>
using namespace std;
int BS(int arr[] , int n , int k){
    int s=0;
    int e=n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]==k){
            return m;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
pair<int,int> findPair(int arr[],int n , int diff){
    for(int i =0 ;i<n;i++){
        int x=BS(arr,n,arr[i]+diff);
        if(x!=-1){
            return {i,x};
        }
    }
    return {-1,-1};
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int diff;
    cin>>diff;
    pair<int,int> p = findPair(arr,n,diff);
    cout<<p.first<<" "<<p.second;
    return 0;
}