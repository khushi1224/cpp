#include<iostream>
using namespace std;
int bs(int arr[],int n , int key){
    sort(arr,arr+n);
    int s = 0;
    int e = n -1;
    int m = (s+e)/2;
    while(s<=e) {
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]<key){
            //1 2 3 4 5
            s = m+1;
        }
        else{
            e=m-1;
        }
        m = (s+e)/2;
    } 
    return -1;
}
int main()
{
    int arr[7]={2,3,1,5,6,5,1};
    int key = 4;
    cout<<bs(arr,7,4);
    return 0;
}