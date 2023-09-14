#include<bits/stdc++.h>
using namespace std;

//Inheritance and runtime polymorphism at the same time

class Animal {

private:
	int a;

public:

	Animal(int x) : a(x) {
		cout<<"Class Animal is called" <<endl;
	}

	int getA() {
		return a;
	}
};

class Dog : public Animal {
private:
	int b;
public:
	Dog(int x) : Animal(x), b(x) {
		cout<<"Class Dog is called" <<endl;
	}

	int getB() {
		return b;
	}
};

int main() {
	Dog dg(10);
	
	cout << "Value of a (from Animal): " << dg.getA() << endl;
    cout << "Value of b (from Dog): " << dg.getB() << endl;

    return 0;
}