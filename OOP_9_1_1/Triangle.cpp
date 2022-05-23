#include <math.h>
#include "Triangle.h"
using namespace std;
int a, b, c;
double S;
Triangle::Triangle(int firstSide, int secondSide, int thirdSide) {

	a = firstSide;
	b = secondSide;
	c = thirdSide;
}

double Triangle::getPerimeter() {
	return a + b + c;
}

double Triangle::getArea() {

	double hP = getPerimeter() / 2;
	S = sqrt(hP * (hP - a) * (hP - b) * (hP - c));
	return S;

}