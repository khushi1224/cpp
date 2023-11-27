//
// Created by khushi on 11/27/2023.
//
#include <iostream>
using namespace std;


class integers{
private:
    int a , b , c;
public:
    int d , e , f;
//    Function Declaration;
    void setdata(int a1, int b1, int c1);
    void getdata();
};
void integers :: setdata(int a1, int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}
void integers ::getdata() {
    cout<<"The Values are: "<<a <<b <<c <<d <<e <<f <<endl;
}


int main(){
    integers first;
    first.d=4;
    first.e=5;
    first.f=6;
    first.setdata(1,2,3);
    return 0;
}
