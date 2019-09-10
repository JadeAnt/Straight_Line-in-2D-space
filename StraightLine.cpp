#include <iostream>
#include <cmath>
#include "StraightLine.h"
using namespace std;

StraightLine::StraightLine() { //non paramaterized constructor

	cout << "Constructing Straight Line Object.\n";
	slope = 0;
	yintercept = 0;
	xintercept - 0;
}

StraightLine::StraightLine(double k, double b) { // paramaterized constructor
	cout << "Constructing Straight Line Object.\n";
	slope = k;
	yintercept = b;
	xintercept = (-yintercept) / slope ;
}

void StraightLine::expressionofLine() { //returns expression of line in y = k * x + b form

	cout << "y = " << slope << "x + " << yintercept << endl;

}

double StraightLine::getSlope() const { // returns the slope

	return slope;

}

double StraightLine::getXintercept() const{ // returns the x intercept

	// 0 = k * x + b -> -b/k = x
	return xintercept; // in coordinate form??

}

double StraightLine::getYintercept() const { // returns the y intercept

	return yintercept; // In coordinate form??

}

void StraightLine::horizontalShift(double shiftBy) { //shifts the line left or right depending on the parameter
	xintercept += shiftBy;
	cout << "Horizontally Shifted\n";
	cout << "New X intercept = " << xintercept << endl;
}

void StraightLine::verticalShift(double shiftBy){ //shifts line up or down depending on the parameter
	yintercept = yintercept + shiftBy;
	cout << "Vertically Shifted\n";
	cout << "New Y intercept = " << yintercept << endl;
}

void StraightLine::rotateLine() { //rotates the line 90 degrees by changing the slope
	cout << "Rotating Line 90 degrees \n";
	
	double temp = xintercept;
	xintercept = yintercept;
	yintercept = -temp;
	slope = yintercept/ xintercept; 
	
	cout << "New Xintercept: " << xintercept << " New Yintercept: " << yintercept << " Slope: " << slope << endl; 
}

bool StraightLine::operator ||(const StraightLine& L2) const { // checks if the two lines are parallel (L1 || L2)

	if (L2.slope == slope)
		return true;
	else
		return false;

}

void StraightLine::operator *(int m) { // multiplies the line by an integer number (L1 * m)

	slope = slope * m;
	yintercept = yintercept * m;

}

