#include <iostream>

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

double StraightLine::getSlope(){ // returns the slope

  return slope;

}

double StraightLine::getXintercept(){ // returns the x intercept
  double finalXIntercept;
                                             
  finalXIntercept = (-yintercept) / (slope) // 0 = k * x + b -> -b/k = x
  return finalXIntercept;
}

double StraightLine::getYintercept(){ // returns the y intercept

  return yintercept;

}

void StraightLine::horizontalShift(); 
    
void StraightLine::verticalShift();
   
void StraightLine::rotateLine();
    
bool StraightLine::isParallel();
    
void StraightLine::multiplyLineBy(int m); // multiplies the line by an integer number
    

