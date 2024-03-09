#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
double factorial(double x) {
    int n = static_cast<int>(floor(x)); 
    if (n < 0) {
        cerr << "Error: Factorial is defined only for non-negative integers." << endl;
        return -1;
    }
    return factorial(n);
}

int main() {
    int n;
    cout << "Enter an integer number to calculate its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    double x;
    cout << "Enter a floating-point number to calculate its factorial (rounded down): ";
    cin >> x;
    cout << "Factorial of " << x << " is: " << factorial(x) << endl;

    return 0;
}
