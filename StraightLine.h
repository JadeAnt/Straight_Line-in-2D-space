class StraightLine{
  private:
  
    double slope, xintercept, yintercept;

  public:
    StraightLine(); //non paramaterized constructor
    
    StraightLine(double k, double b);// paramaterized constructor
    
    void expressionofLine(); //returns expression of line in y = k * x + b form
    
    double getSlope() const;// returns the slope
    
    double getXintercept() const; // returns the x intercept
    
    double getYintercept() const; // returns the y intercept
   
    void horizontalShift(); // shifts the line to the left or right, by changing the x intercept
    
    void verticalShift();//shifts the line up or down using the y intercept
   
    void rotateLine(); // rotates the line by changing the slope
    
    bool operator ||(const StraightLine& L2) const; // returns whether or not the line is parallel to another (L1 || L2)
    
    void operator *(int m); // multiplies the line by an integer number ( Line1 * m)
    
}
