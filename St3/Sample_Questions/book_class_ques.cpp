//
// Created by khushi on 11/30/2023.
//
#include <iostream>
#include <string>
using namespace std;
class Book{
public:
    string title;
    string author;
    int year;
    Book(string t , string a , int y){
        title = t ;
        author = a;
        year = y;
    }
//    ~Book(){
//
//        cout<<"Destruction of Book: "<<title;
//    }
    int display(){
        cout<<"Book Created :"<<title << endl <<"Book Author: "<< author << endl;
        cout<<"Destruction of Book: "<<title;
        return 0;
    }

};
int main(){
    string title;
    string author;
    int year;
    cin>>title>>author>>year;
    Book b1(title,author,year);
    b1.display();
    return 0;
}