#include<iostream>
using namespace std;
void altSwap(int arr[], int n){
    for(int i = 0 ; i<n ; i+=2){
        if(i<n-1){
            swap(arr[i],arr[i+1]);
        }
    }
} //1,2,3,4,5
// 2 , 1 , 4 , 3 
void printArray(int arr[] , int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    altSwap(arr,5);
    printArray(arr,5);
    return 0;
}