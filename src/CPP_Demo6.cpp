//============================================================================
// Name        : CPP_Demo6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<string.h>
#include <stdio.h>
class CFigure {
public:
	virtual double getArea()=0;
};
const double PI = 3.14;
class CCircle: public CFigure {
private:
	double m_dRadius;
public:
	CCircle(double dr) {
		m_dRadius = dr;
	}
	double getArea() {
		return m_dRadius * m_dRadius * PI;
	}
};
class CRectangle: public CFigure {
protected:
	double m_dHeight, m_dWidth;
public:
	CRectangle(double dHeight, double dWidth) {
		m_dHeight = dHeight;
		m_dWidth = dWidth;
	}
	double getArea() {
		return m_dHeight * m_dWidth;
	}
};

int main() {

	CFigure *fg1;
	fg1 = new CRectangle(4.0, 5.0);
	cout << fg1->getArea() << endl;
	CFigure *fg2;
	fg2 = new CCircle(4.0);
	cout << fg2->getArea() << endl;
	delete fg1;
	delete fg2;

	return 0;
}
