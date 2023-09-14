#include <bits/stdc++.h>
using namespace std;

class Square {
private:
    double side;
    double area;

public:
    Square(double s) : side(s) {}

    void findArea() {
        area = side * side;
        cout << "Area of Square = " << area;
    }
};

int main() {
    double sideLength = 5.0; // Replace with your desired side length

    Square sq(sideLength);
    sq.findArea();

    return 0;
}
