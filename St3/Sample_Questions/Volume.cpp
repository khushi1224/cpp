//
// Created by khushi on 12/1/2023.
//
#include <iostream>
#include <math.h>
using namespace std;
class Vol{
public:
    int side;
    Vol(int s){
        side = s;
    }
    int volume(){
        cout<<"Area of cube is :" << pow(side,3);
    }
};
int main(){
    int side;
    cin>>side;
    Vol v1(side);
    v1.volume();
    return 0;
}