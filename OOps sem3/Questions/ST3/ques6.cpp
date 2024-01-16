//
// Created by khushi on 11/28/2023.
//
#include <iostream>

class DynamicArray {
private:
    int* data;
    int size;

public:
    // Parameterized constructor
    DynamicArray(int n) : size(n) {
        data = new int[size];
    }

    // Copy constructor
    DynamicArray(const DynamicArray& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    // Display the array elements
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Modify the array elements
    void modifyArray() {
        for (int i = 0; i < size; ++i) {
            data[i] *= 2;
        }
    }

    // Destructor to free the dynamically allocated memory
    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    // Create objects of the DynamicArray class
    DynamicArray array1(5);
    array1.display();

    // Create a copy using the copy constructor
    DynamicArray array2 = array1;
    array2.display();

    // Modify array1 and observe if it affects array2
    array1.modifyArray();
    std::cout << "After modification:" << std::endl;
    array1.display();
    array2.display();

    return 0;
}
