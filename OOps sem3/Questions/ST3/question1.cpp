//
// Created by khushi on 11/28/2023.
//
/* Write a program to print the names of students by creating a Student class.
 * If no name is passed while creating an object of the Student class, then the name should be "Unknown",
 * otherwise the name should be equal to the String value passed while creating the object of the Student class.*/

#include <iostream>
#include <cstring>
using namespace std;

class Student{
    string name;
public:
    Student(){
        name = "Unknown";
    }
    Student(string n){
        name = n;
    }
    void display(){
        cout<<"Name:" << name << endl;
    }
};
int main(){
    Student s1;
    Student s2("khushi");
    s1.display();
    s2.display();
    return 0;
}