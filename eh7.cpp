#include <iostream>

int main() {
    try {
        int num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        if (num2 == 0) {
            // Throw an exception if the second number is zero
            throw std::runtime_error("Division by zero error");
        }

        // Divide the first number by the second number
        std::cout << "Result of division: " << num1 / num2 << std::endl;
    } catch (const std::runtime_error& e) {
        // Catch the exception and handle it
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
