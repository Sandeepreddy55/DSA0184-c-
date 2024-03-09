#include <iostream>
#include <cmath>
using namespace std;
long long int power(int base, int exponent) {
    long long int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int intBase = 2;
    int intExponent = 5;
    cout << "Power of " << intBase << " raised to the power of " << intExponent << " is: " << power(intBase, intExponent) << endl;

    double doubleBase = 2.5;
    int doubleExponent = 3;
    cout << "Power of " << doubleBase << " raised to the power of " << doubleExponent << " is: " << power(doubleBase, doubleExponent) << endl;

    return 0;
}
