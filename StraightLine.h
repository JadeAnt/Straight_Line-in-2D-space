class StraightLine{
  private:
  
    double slope;
    double yintercept;

  public:
    StraightLine(); //non paramaterized constructor
    
    StraightLine(double k, double b);// paramaterized constructor
    
    void expressionofLine(); //returns expression of line in y = k * x + b form
    
    double getSlope();// returns the slope
    
    double getXintercept(); // returns the x intercept
    
    double getYintercept(); // returns the y intercept
   
    void horizontalShift(); // shifts the line to the left or right, by changing the x intercept
    
    void verticalShift();//shifts the line up or down using the y intercept
   
    void rotateLine(); // rotates the line by changing the slope
    
    bool isParallel();// returns whether or not the line is parallel to another
    
    void multiplyLineBy(int m); // multiplies the line by an integer number
    
}
