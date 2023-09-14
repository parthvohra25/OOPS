#include <bits/stdc++.h>
using namespace std;

// Inheritance and runtime polymorphism
class Animal {
public:
    void out() {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal {
public:
    void out() {
        cout << "Barking" << endl;
    }
};

// Compile Time Polymorphism
// Function Overloading
class Polymorphism {
public:
    int add(int a, int b, int c) {
        cout << a + b + c << endl;
    }

    int add(int a, int b) {
        cout << a + b << endl;
    }

    double add(double a, double b, double c) {
        cout << a + b + c << endl;
    }
};

// Operator Overloading
class Operator {
private:
    int data;

public:
    Operator() : data(5) {}

    void operator++() {
        data = data + 5;
    }

    int getValue() {
        return data;
    }
};

int main() {
    // Inheritance and runtime polymorphism
    Animal animal;
    Dog dog;

    animal.out(); // Calls Animal's out()
    dog.out();    // Calls Dog's out()

    // Compile Time Polymorphism
    Polymorphism poly;

    poly.add(1, 2);          // Calls int add(int a, int b)
    poly.add(1, 2, 3);       // Calls int add(int a, int b, int c)
    poly.add(1.5, 2.5, 3.5); // Calls double add(double a, double b, double c)

    // Operator Overloading
    Operator op;
    cout << "Initial Value: " << op.getValue() << endl;
    ++op; // Calls the overloaded operator++
    cout << "After Operator Overloading: " << op.getValue() << endl;

    return 0;
}
