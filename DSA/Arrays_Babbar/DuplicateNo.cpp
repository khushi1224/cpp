#include<iostream>
using namespace std;
int findDuplicate(int arr[],int n){
    int ans=0;
    for(int i =0 ; i<n ; i++){
        ans = ans ^ arr[i];
    }
    for(int i=0 ;i<n ;i++){
        ans = ans ^ i ;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    // Dynamic memory allocation for the array
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findDuplicate(arr, n);

    // Deallocate the dynamically allocated memory
    delete[] arr;
    return 0;
}