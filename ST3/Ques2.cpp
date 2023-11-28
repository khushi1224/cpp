//
// Created by khushi on 11/28/2023.
//
/*Create a class called Rectangle with private attributes length and width.
 * Implement a default constructor that sets both length and width to 1.
 * Include a member function calculateArea that calculates and returns the area of the rectangle.
 * Create an object of the Rectangle class and display its area.*/


//#include <iostream>
//
//class Rectangle {
//private:
//    double length;
//    double width;
//
//public:
//    // Default constructor
//    Rectangle() {
//        length = 1.0;
//        width = 1.0;
//    }
//
//    // Member function to calculate area
//    double calculateArea() {
//        return length * width;
//    }
//};
//
//int main() {
//    // Create an object of the Rectangle class
//    Rectangle myRectangle;
//
//    // Display the area of the rectangle
//    std::cout << "The area of the rectangle is: " << myRectangle.calculateArea() << std::endl;
//
//    return 0;
//}





































#include <iostream>
using namespace std;
class Rectangle{
public:
    int len;
    int width;
    Rectangle(int l , int w){
        len = l;
        width = w;}
      int  get_area(){
          cout<<"Area:"<< len * width << endl; ;

    }

};
int main(){
//    Rectangle R1;
    Rectangle R2(2,3);
    R2.get_area();
    return 0;
}