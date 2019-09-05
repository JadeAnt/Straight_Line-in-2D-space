#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

StraightLine(){ //non paramaterized constructor

  cout << "Constructing Straight Line Object." << endl;

}

StraightLine::StraightLine(double k, int b){ // paramaterized constructor
  cout << "Constructing Straight Line Object." << endl;
  slope = k;
  yintercept = b;
}

void StraightLine::expressionofLine(){ //returns expression of line in y = k * x + b form

  cout << "y = " << slope << "x + " << yintercept << endl; 
  
}

double StraightLine::getSlope() const{ // returns the slope

  return slope;

}

double StraightLine::getXintercept() const{ // returns the x intercept
  double finalXIntercept;
                                             
  finalXIntercept = (-yintercept) / (slope) // 0 = k * x + b -> -b/k = x
  return finalXIntercept;
}

double StraightLine::getYintercept() const{ // returns the y intercept

  return yintercept;

}

void StraightLine::horizontalShift(); 
    
void StraightLine::verticalShift();
   
void StraightLine::rotateLine();
    
bool StraightLine::operator ||(const StraightLine& L2) const; // checks if the two lines are parallel

void StraightLine::operator *(const StraightLine& L2) const; // multiplies the line by an integer number
    

