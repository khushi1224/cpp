#include<iostream>
using namespace std;
int firstOcc(int arr[],int n , int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans = m;
            e=m-1;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n , int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==key){
            ans = m;
            s=m+1;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int totalOcc(int arr[],int n , int key){
    int first = firstOcc(arr,n,key);
    int last = lastOcc(arr,n,key);
    if(first!=-1 && last!=-1){
    int total  = last - first+ 1;
    return total;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<totalOcc(arr,n,key);
    return 0;
}