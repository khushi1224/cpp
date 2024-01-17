#include<iostream>
using namespace std;
int findDuplicate(int arr[],int n ){
    int ans = 0 ;
    for(int i =0 ; i< n ;i++){
        ans = ans^arr[i];
    }
    for(int i =0 ; i< n ;i++){
        ans = ans^i;
    }
    return ans;
}
int removeDuplicate(int arr[],int n){
    
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    return 0;
}