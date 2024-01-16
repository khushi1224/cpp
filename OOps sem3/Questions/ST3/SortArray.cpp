//
// Created by khushi on 11/30/2023.
//
#include <iostream>
using namespace std;
class ArraySort {
    int size;
    int *arr;

public:
    ArraySort(int s) {
        size = s;
        arr = new int[size];
    }

    ~ArraySort() {
        delete[] arr;
    }

    void input_array() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display_array() {
        for (int i = 0; i < size; i++) {
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }
    void sort_array(){
        int temp;
        for(int i =0 ; i<size ;i++){
            for(int j = i+1 ; j<size ; j++) { //1 3 2 0    0 1 2 3
                if(arr[i]>arr[j]){ //1 >3 --- 1 > 2 --- 1>0{ temp =1 1 = 0 0=1} 0 >3
                    temp = arr[i];
                    arr[i]= arr[j];
                    arr[j]= temp;
                }
            }
        }
    }

};
int main(){
    int size;
    cin>>size;
    ArraySort a1(size);
    a1.input_array();
    a1.sort_array();
    a1.display_array();
    return 0;
}