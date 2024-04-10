#include "pch.h"
#include <iostream>

// decimal separator


using namespace std;

void floatnumsepar(float, float&, float&);

int main()
{
	float number, intpart, decimpart;
	cout << "input float number: ";
	cin >> number;
	floatnumsepar(number, intpart, decimpart);
	cout << "integer part number = " << intpart << "\tdecim part number = " << decimpart << endl;
}

void floatnumsepar(float n, float& intpart, float& decimpart) {
	int temp = static_cast<int>(n);
	intpart = temp;
	decimpart = n - temp;
}