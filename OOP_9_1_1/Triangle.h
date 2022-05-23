#ifndef __TRIANGLE_H
#define __TRIANGLE_H
#include <math.h>
#include <iostream>
using namespace std;
class Triangle {

public:
	int a;
	int b;
	int c;

	Triangle() {};
	Triangle(int firstSide, int secondSide, int thirdSide);

	double getPerimeter();
	double getArea();
};
#endif