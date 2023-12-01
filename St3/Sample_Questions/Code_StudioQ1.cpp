//
// Created by khushi on 12/1/2023.
//

#include<iostream>

using namespace std;

class ComplexNumbers {
public:
    int real;
    int img;
public:
    ComplexNumbers(int r , int i ){
        real = r ;
        img = i ;
    }
    ComplexNumbers operator+ (ComplexNumbers c2){
        int resr , resi;
        resr = real + c2.real;
        resi = img + c2.img ;
        return ComplexNumbers(resr , resi);
    }
    ComplexNumbers operator* (ComplexNumbers c2){
        int resr , resi;
        resr = (real * c2.real) - (img * c2.img);
        resi = (real * c2.img ) + (img * c2.real);
        return ComplexNumbers(resr , resi);
    }
    int display(){
        cout<< real <<"+ i"<< img;
        return 0;
    }
};





int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        ComplexNumbers c3 =c1+c2;
        c3.display();
    } else if (choice == 2) {
        ComplexNumbers c4 = c1*c2;
        c4.display();
    } else {
        return 0;
    }

}