#include <iostream>
#include <stdexcept>

int main() {
    try {
        int divisor = 0;
        std::cout << "Enter a number to divide 10 by: ";
        std::cin >> divisor;

        if (divisor == 0) {
            throw std::runtime_error("Division by zero error");
        }

        std::cout << "Result of division: " << 10 / divisor << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Catch any other standard exceptions
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch any other unknown exceptions
        std::cerr << "Unknown exception caught" << std::endl;
    }

    return 0;
}
