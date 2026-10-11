#include <iostream>
using namespace std;

class Rectangle {

private:
    double width;
    double length;

public:
    void setWidth(double w){
        width=w;
    }

    void setLength(double l){
        length=l;
    }

    double getWidth(){
        return width;
    }

    double getLength(){
        return length;
    }

    double calculateArea(){
        return width*length;
    }

    double calculatePerimeter(){
        return 2 * (width + length);
    }

};

int main() {
    
    Rectangle rectangleA;
    rectangleA.setWidth(4);
    rectangleA.setLength(7);
    cout << "Rectangle A: " << endl;
    cout << "Width is: " << rectangleA.getWidth() << endl;
    cout << "Length is: " << rectangleA.getLength() << endl;
    cout << "Area is: " << rectangleA.calculateArea() << endl;
    cout << "Perimeter is: " << rectangleA.calculatePerimeter() << endl;

    Rectangle rectangleB;
    rectangleB.setWidth(8);
    rectangleB.setLength(12);
    cout << "\nRectangle B: " << endl;
    cout << "Width is: " << rectangleB.getWidth() << endl;
    cout << "Length is: " << rectangleB.getLength() << endl;
    cout << "Area is: " << rectangleB.calculateArea() << endl;
    cout << "Perimeter is: " << rectangleB.calculatePerimeter() << endl;

    return 0;
}