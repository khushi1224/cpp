#include<iostream>
using namespace std;
void bubble(int *arr , int n){
    for(int i =0 ;i<n-1 ; i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}