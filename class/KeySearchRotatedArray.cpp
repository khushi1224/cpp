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
int rotatedBS(int arr[],int n , int key){
    int pivot=minEle(arr,n);
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        int rm = (mid+pivot)%n;
        if(arr[rm]==key){
            return rm;
        }
        else if (arr[rm]>key){
            high = mid -1;

        }
        else{
            low= mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<rotatedBS(arr,n,key);
    return 0;
}