// quadratic equation.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>

using namespace std;

class quadratic {
private:
	double a;
	double b;
	double c;
	double delta;
	double x1;
	double x2;
public:
	double root1(void) {return x1;};
	double root2(void) {return x2;};
	void updateA(double A) {this->a = A;};
	void updateB(double B) {this->b = B;};
	void updateC(double C) {this->c = C;};
	short number_of_roots;
	void calculate(void) {
		delta = b*b-4*a*c;
		if (delta < 0) {
		number_of_roots = 0;
		}

		if (delta == 0) {
			number_of_roots = 1;
			x1 = (-b + sqrt(delta))/2*a;
			x2 = x1;
		}

		if (delta > 0) {
			number_of_roots = 2;
			x1 = (-b + sqrt(delta))/2*a;
			x2 = (-b - sqrt(delta))/2*a;
		}
	}
	quadratic(double user_a, double user_b, double user_c) {
		a = user_a;
		b = user_b;
		c = user_c;
		delta = b*b-4*a*c;
		calculate();
	}
	void display(void) {
		switch (number_of_roots) {
		case 0:
			cout<< "There are no real roots.";
			break;
		case 1:
			cout<< "There is one root, which is " << x1 <<".";
			break;
		case 2:
			cout<< "There are two real roots, which are " << x1 << " and " << x2 << ".";
		}
	}
};
int main() {
	double a;
	double b;
	double c;

	cout<< "Enter the value of a: ";
	cin>> a;
	cout<< "Enter the value of b: ";
	cin>> b;
	cout<< "Enter the value of c: ";
	cin>> c;

	quadratic instance(a, b, c);
	instance.display();
	cin.ignore();
	cin.get();
}