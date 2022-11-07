/* Complex Number
    - Create a class ComplexNumber that represents the Complex Number data type.
*/

#include <iostream>
#include <cmath>

using namespace std;

class ComplexNumber {
    private: 
        double re;
        double im;

    public:
        // Constructors
        // With no arguments
        ComplexNumber(): re{0}, im{0} {}

        // One argument
        ComplexNumber(double im) {
            re = 0;
            this->im = im;
        }

        // Two arguments
        ComplexNumber(double re, double im): re{re}, im{im} {}
    
        // Destructor
        ~ComplexNumber() {}

        void operator=(const ComplexNumber &c) {
            re = c.re;
            im = c.im;
        }

        ComplexNumber operator+()
};