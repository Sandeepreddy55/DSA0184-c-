#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        cout << "Rectangle object created with length: " << length << " and width: " << width << endl;
    }
    ~Rectangle() {
        cout << "Rectangle object destroyed" << endl;
    }
    double area() const {
        return length * width;
    }
    double perimeter() const {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle rect(5.0, 3.0);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
