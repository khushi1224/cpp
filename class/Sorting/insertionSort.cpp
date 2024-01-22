#include<iostream>
using namespace std;
void insertion(int *arr , int n){
     for(int i =1;i<n;i++){
        int j = i-1;
        int current = arr[i];
        while(j>=0&&arr[j]>current) 
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
    insertion(arr,n);
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}