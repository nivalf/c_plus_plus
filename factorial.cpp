/* Factorial
    - Calculate the factorial of a number
*/
#include <iostream>
using namespace std;

unsigned int factorial_n(unsigned int n) {
    if (n == 0) 
        return 1;
    return n * factorial_n(n-1);
} 

int main() {
    int x;
    cout << "Enter the number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    
    cout << "The Factorial is: ";
    cout << factorial_n(x);

    return 0;
}
