#include<iostream>
using namespace std;
int minEle(int arr[] , int n){
    int low=0;
    int high=n-1;
    int mid;
    while(low<high){
        mid =(low+high)/2;
        if(arr[mid]>arr[high]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minEle(arr,n);
    return 0;
}