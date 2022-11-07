/* Sigma Summation
    - This program will calculate the sum of all the numbers from 1 to n.
*/
#include <iostream>
using namespace std;

unsigned int sigma_sum(unsigned int n) {
    if (n == 0) 
        return 0;
    return n + sigma_sum(n-1);
}

int main() {
    int x;
    cout << "Enter the number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    
    cout << "The sigma_sum is: ";
    cout << sigma_sum(x);

    return 0;
}

