//
// Created by khushi on 11/28/2023.
//
/* Define a class Person with attributes name and age.
 * Implement two constructors - one with parameters for both name and age, and another with only the name parameter
 * (setting the age to a default value of 0).
 * Create two objects of the Person class using both constructors and display their details. */

#include <iostream>
#include<string>
using namespace std;
class Person{
    int age;
    string name;
public:
    Person(int a , string n){
        age = a;
        n = name;
    }
    Person( string n){
        name = n;

    }
    void display(){
        cout<<" Name : " << name << ", Age :"<< age << endl;
    }
};
int main(){
    P
    return 0;
}