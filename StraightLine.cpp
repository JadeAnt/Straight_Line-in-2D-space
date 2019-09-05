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
  
  xintercept = (-yintercept) / (slope) // 0 = k * x + b -> -b/k = x
  return xintercept;
  
}

double StraightLine::getYintercept() const{ // returns the y intercept

  return yintercept;

}

void StraightLine::horizontalShift(double shiftBy){
  xintercept += shiftBy;
}
    
void StraightLine::verticalShift(double shiftBy){
  yintercept += shiftBy;
}
   
void StraightLine::rotateLine();
    
bool StraightLine::operator ||(const StraightLine& L2) const{ // checks if the two lines are parallel (L1 || L2)

  if(L2.slope == slope)
    return true;
  else
    return false;

}

void StraightLine::operator *(int m){ // multiplies the line by an integer number (L1 * m)

  slope = slope *  m;
  yintercept = yintercept * m;
  
}

