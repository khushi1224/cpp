//
// Created by khushi on 11/28/2023.
//

#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    ComplexNumber() : real(0.0), imaginary(0.0) {}

    // Parameterized constructor with initializer list
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create objects of the ComplexNumber class using different constructors
    ComplexNumber complex1;           // Default constructor
    ComplexNumber complex2(2.5, 3.7);  // Parameterized constructor

    // Display the complex numbers
    std::cout << "Complex Number 1: ";
    complex1.display();

    std::cout << "Complex Number 2: ";
    complex2.display();

    return 0;
}
