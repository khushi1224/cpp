#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int start=0;
    int end=n-1;
    int mid = start +(end - start)/2;
    while (start<=end)
    {
        if(arr[mid]== key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
    
}
int main()
{
    int evenArr[6]={1,3,5,6,7,9};
    int oddArr[7]={2,6,7,9,14,23,29};
    cout<<binarySearch(evenArr,6,9)<<endl;
    cout<<binarySearch(oddArr,7,1);
    return 0;
}