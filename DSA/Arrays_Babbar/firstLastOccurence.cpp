#include<iostream>
using namespace std;
int firstOcc(int arr[],int n , int k){
    int s=0;
    int e=n-1;
    int m = s+(e-s)/2;
    int ans=-1; 
    while(s<=e){
        if(arr[m]==k){
            ans = m;
            e=m-1;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int m = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==k){
            ans = m;
            s=m+1;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
pair<int,int> occ(int arr[],int n , int k){
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    pair<int, int> result = occ(arr, n, k);
    cout << "First Occurrence: " << result.first << endl;
    cout << "Last Occurrence: " << result.second << endl;
    return 0;
}
