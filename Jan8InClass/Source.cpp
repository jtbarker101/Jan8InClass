//Jon Barker
//This is my own work
//In Class January 8

#include<iostream>
#include<cmath>
using namespace std;

int main() {

	/*int w;
	cout << "Please enter the weight you want to convert. ";
	cin >> w;
	cout << w << " in kilograms is " << w * 0.454;

	int s;
	cout << "please enter the side length of the polygon ";
	cin >> s;
	cout << "the area is " << (((3 * sqrt(3)) / (2)) * (pow(s,2.0)));*/

	float a;
	float b;
	cout << "Please enter two numbers. ";
	cin >> a >> b;
	if (a > b) {
		cout << a << " is the larger number.";
	}
	else if (b > a) {
		cout << b << " is the larger number.";
	}
	else {
		cout << "Both numbers are the same.";
	}

	return 0;
}