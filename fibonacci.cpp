/* Compute the nth element of fibonacci series
*   Author: Flavin Lee John
*   Date: 03 November 2022
*/

#include <iostream>

using namespace std;

int compute_1(unsigned int);
constexpr int compute_2(unsigned int);
int compute_3(unsigned int);

int main()
{
    int n = 30;         // nth element of fibonacci series 
    int y1 = compute_1(n);
    int y2 = compute_2(n);
    int y3 = compute_3(n);
    cout << "compute_1("<<n<<"): "<<y1 << endl; 
    cout << "compute_2("<<n<<"): "<<y2 << endl; 
    cout << "compute_3("<<n<<"): "<<y3 << endl; 
    
   return 0;
}

int compute_1(unsigned int a) {
    switch (a) {
        case 0:
            return 0;
        case 1: 
            return 1;
        default:
            return compute_1(a-1) + compute_1(a-2);
    }
}

constexpr int compute_2(unsigned int a) {
    return a==0 ? 0 : a==1 ? 1 : compute_2(a-1) + compute_2(a-2);
}

int compute_3(unsigned int a) {
    // f(0) = 0, f(1) = 1
    if(a<2) {
        return a==1 ? 1 : 0;
    }
    
    int n = 2;
    int fibonacci_n_2 = 0;
    int fibonacci_n_1 = 1;
    int fibonacci_n;
    
    while(n<=a) {
        fibonacci_n = fibonacci_n_1 + fibonacci_n_2;
        // for next iteration
        fibonacci_n_2 = fibonacci_n_1;
        fibonacci_n_1 = fibonacci_n;
        ++n;
    }
    
    return fibonacci_n;
}