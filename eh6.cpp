#include <iostream>
#include <stdexcept>

// A function that throws different types of exceptions based on a condition
void checkValue(int value) {
    if (value == 0) {
        throw std::invalid_argument("Value cannot be zero");
    } else if (value < 0) {
        throw std::runtime_error("Value cannot be negative");
    }
    
    std::cout << "Value is: " << value << std::endl;
}

int main() {
    try {
        int value;
        std::cout << "Enter a non-zero integer: ";
        std::cin >> value;
        
        checkValue(value);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument exception: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;
    }
    
    return 0;
}
