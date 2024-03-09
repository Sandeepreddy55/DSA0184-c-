#include <iostream>
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool isHarshad(int n) {
    int sum = sumOfDigits(n);
    return n % sum == 0;
}
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (isHarshad(number)) {
        std::cout << number << " is a Harshad number." << std::endl;
    } else {
        std::cout << number << " is not a Harshad number." << std::endl;
    }
    return 0;
}
