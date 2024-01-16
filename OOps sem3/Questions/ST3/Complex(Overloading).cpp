//
// Created by khushi on 11/29/2023.
//
#include<iostream>
using namespace std;

class Complex{
public:
    double real ;
    double img;
    Complex(double r , double i){
        real = r ;
        img = i ;
    }
    Complex operator+(Complex c2){
        double ResR = real + c2.real;
        double ResI = img + c2.img ;
        return Complex(ResR,ResI);
    }
    Complex operator-(Complex c2){
        double ResR = real - c2.real;
        double ResI = img - c2.img ;
        return Complex(ResR,ResI);
    }

    void Display(){
        cout<< real << "+"<<img<<"i"<<endl;
    }

};

int main(){
    Complex C1(1,1);
    Complex C2(2,3);
    Complex C3 = C1 + C2 ;
    Complex C4 = C2 - C1 ;

    C3.Display();
    C4.Display();
    return 0;
}