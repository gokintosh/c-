//In this program we are going to create a function to calculate the 
// circumference and area of a circle with radius 2.5

//below is the header declaration 
#include<iostream>
using namespace std;

const double pi = 3.141593;

int main() {
	double area, circuit, radius = 1.5;

	area = pi * radius *radius;
	circuit = 2 * pi*radius;

	cout << "Below are the calculated results\n";
	cout << "Radius:" << radius<<"\n";
	cout << "Area:" << area<<"\n";
	cout << "circumference:" << circuit<<"\n";

	return 0;
}