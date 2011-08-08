// quadratic equation.cpp : Defines the entry point for the console application.
//

#ifdef _WIN32
#include "stdafx.h" 
#endif
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
	double get_x1(void) {return x1;};
	double get_x2(void) {return x2;};
	short number_of_roots;
	quadratic(double user_a, double user_b, double user_c) {
		a = user_a;
		b = user_b;
		c = user_c;
		delta = b*b-4*a*c;
		if (delta < 0) {
		number_of_roots = 0;
		}

		if (delta == 0) {
			number_of_roots = 1;
			x1 = (-b + sqrt(delta))/2*a;
		}

		if (delta > 0) {
			number_of_roots = 2;
			x1 = (-b + sqrt(delta))/2*a;
			x2 = (-b - sqrt(delta))/2*a;
		}
	}
	void display(void) {
		switch (number_of_roots) {
		case 0:
			cout<< "There are no real roots.";
			break;
		case 1:
			cout<< "There is one root, which is " << x1;
			break;
		case 2:
			cout<< "There are two real roots, which are " << x1 << " and " << x2;
		}
	}
};
int main() 
{

double a;
double b;
double c;

cout<< "Enter the value of a: " << endl;
cin>> a;
cout<< "Enter the value of b: " << endl;
cin>> b;
cout<< "Enter the value of c: " << endl;
cin>> c;

quadratic instance(a, b, c);
instance.display();
cin.ignore();
cin.get();
}