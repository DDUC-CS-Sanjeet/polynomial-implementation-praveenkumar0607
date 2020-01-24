#include<iostream>
using namespace std;

class Polynomial
{
  private:
    // Variables to store information about polynomial
  public:
    Polynomial()
    {
      // Behavior of default constructor
    }

    Polynomial(int deg)
    {
      // Behavior of constructor with arguments
    }
  
    ~Polynomial()
    {
      // Behavior of destructor
    }
  
    //  Overload copy constructor, +, - and = operators
  
    void storePolynomial()
    {
      //  Code to enter and store polynomial
    }
    void display()
    {
      //  Code to print the polynomial in readable format
    }
  
}

int main()
{
  int degFirst, degSecond;
  // Ask user to input the values of degFirst and degSecond 
  Polynomial firstPolynomial(degFirst);
  Polynomial secondPolynomial(degSecond);
  Polynomial thirdPolynomial;
  
  firstPolynomial.storePolynomial();
  secondPolynomial.storePolynomial();
  
  thirdPolynomial=firstPolynomial+secondPolynomial;
  Polynomial fourthPolynomial=firstPolynomial-secondPolynomial;
  
  firstPolynomial.display();
  secondPolynomial.display();
  thirdPolynomial.display();
  fourthPolynomial.display();
}
