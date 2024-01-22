#include<iostream>
using namespace std;
void selction(int *arr , int n){
    for(int i =1 ;i<n ; i++){
        int small = i;
        for(int j=i+1;j<n;j++){
           if (arr[small]>arr[j])
           {
            small=j;
           }
           
        }
    
    }
     swap(arr[i],arr[small]);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    selction(arr,n);
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}