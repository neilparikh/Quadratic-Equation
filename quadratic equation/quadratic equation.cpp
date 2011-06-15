// quadratic equation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;
int main() 
{
double a;
double b;
double c;
double delta;
double x1;
double x2;

cout<< "Enter the value of a:" << endl;
cin>> a;
cout<< "Enter the value of b:" << endl;
cin>> b;
cout<< "Enter the value of c:" << endl;
cin>> c;

delta = b*b-4*a*c;

	if (delta < 0) {
		cout<< "The equation has no real roots.";
	}

	x1 = (-b + sqrt(delta))/2*a;
	x2 = (-b - sqrt(delta))/2*a;

	if (delta == 0) {
		cout<< "The equation has one root which is ";
		cout << x1;
	}

	if (delta > 0) {
		cout<< "The equation has two roots which are "; 
		cout<< x1; 
		cout<< " and ";
		cout<< x2;
	}

cin.ignore();
cin.get();

}