//
// Created by khushi on 11/29/2023.
//
#include <iostream>
using namespace std;

class A{
public:
    int a;
    int b;
    int get_sum(){
        cout<<a+b<<endl;
    }
    int operator+ (A obj){
        int val1 = this -> a;
        int val2 = obj.a;
        cout << val1-val2<<endl;
    }
};


int main(){
    A obj1 , obj2;
    obj1.a =1;
    obj2.a=9;
//    obj1.get_sum();
    obj1+obj2;
    return 0;
}