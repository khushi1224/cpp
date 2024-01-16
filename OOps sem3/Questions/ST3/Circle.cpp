//
// Created by khushi on 12/1/2023.
//
//You are working on a geometric shapes library in C++.
// Implement a Circle class with a member variable representing its radius.
// Overload the == operator to compare two circles for equality based on their radii.


#include <iostream>
using namespace std;
class Circle{
public: int radius;
    Circle (int r) : radius(r) {}
    bool  operator==(Circle c2){
        return radius == c2.radius;
    }

};
int main(){
    int r , r2;
    cin>>r>>r2;
    Circle c1(r);
    Circle c2(r2);
    if(c1==c2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }

    return 0;
}