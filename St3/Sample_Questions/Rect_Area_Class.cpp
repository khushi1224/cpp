//
// Created by khushi on 12/1/2023.
//
#include <iostream>
using namespace std;
class Rect{
public:
    int len;
    int width;
    Rect(int l , int w){
        len = l ;
        width = w;
    }
    int area(){
        cout<< len*width<< endl;
    }
};


int main(){
    int l , b;
    cin>>l>>b;
    Rect r1(l,b);
    r1.area();

    return 0;
}