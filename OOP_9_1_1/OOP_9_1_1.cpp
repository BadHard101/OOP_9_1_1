#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Triangle.h"
using namespace std;
void assignIf(int a, int b, int c, Triangle& first) {

	if (!(a + b <= c || a + c <= b || b + c <= a)) {
		first.a = a;
		first.b = b;
		first.c = c;
	}

}
void operator+(Triangle& first, Triangle& second) {

	int a, b, c;

	a = first.a + second.a;
	b = first.b + second.b;
	c = first.c + second.c;

	assignIf(a, b, c, first);
}
void operator-(Triangle& first, Triangle& second) {

	int a, b, c;

	a = first.a - second.a;
	b = first.b - second.b;
	c = first.c - second.c;

	assignIf(a, b, c, first);
}
void iterations(vector<Triangle> &tr) {

	int firstTr, secondTr;
	char op;

	while (!cin.eof()) {
		cin >> firstTr >> op >> secondTr;

		if (op == '+')
			tr[firstTr - 1] + tr[secondTr - 1];
		if (op == '-')
			tr[firstTr - 1] - tr[secondTr - 1];

	}

	cout << "a = " << tr[firstTr - 1].a << "; b = " << tr[firstTr - 1].b
		<< "; c = " << tr[firstTr - 1].c << '.';
}
int main() {

	int a, b, c, amount;
	vector<Triangle> tr;

	cin >> amount;
	tr.resize(amount);

	for (int i = 0; i < amount; i++) {
		cin >> a >> b >> c;
		tr[i] = Triangle(a, b, c);
	}

	iterations(tr);

	return(0);
}