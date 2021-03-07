/*

Author: Gary Lougheed

Date: 3/3/2021

Class: Fraction, C++ has the following math typss: integer, double, and float.
       This class will allow the user to convert those native types into fractions.
       Facilating addition, subtraction, multiplication, and division.
       This class also contains the capibilities to convert improper to proper fractions, reduce fractions,
       and determine if a fraction is greater than one or equivalent to zero.


       A Templated verision can be found at the following github link: 
*/

class Fraction
{
   private:
       int m_dividend;
       int m_divisor;
       int m_remainder;
       int m_numerator;
       int m_denominator;

   public:
       Fraction(); // Default Constructor
       Fraction(int numerator, int denominator) { m_numerator = m_dividend = numerator; m_denominator = m_divisor = denominator; m_remainder = numerator % denominator; } // Parameterized Constructor
       Fraction(const Fraction& fraction);// Copy Constructor used when passing the object into a function.
       ~Fraction();// Destructor
       Fraction& operator=(const Fraction& rhsObject);// Assignment Operator
       Fraction operator+(const Fraction& rhsObject);// Addition Operator
       // Subtraction Operator
       // Multiplication Operator
       // Division Operator
       // Modules?
       // input/ output operations
      
       // get dividend
       // get divisor
       // get remainder
 
       // set dividend
       // set divisor
       // set remainder

       // isFractionZero
       // isGreaterThanOne
       // isProper()
       // isImproper()
       // convertToProperFraction
       // Reduce (difficult operation)

};
