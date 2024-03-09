#include <iostream>
#include <stdexcept>

// A function that throws an exception based on a condition
void checkAge(int age) {
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative");
    } else if (age < 18) {
        throw std::runtime_error("Must be 18 or older");
    }
    
    std::cout << "Welcome! You are " << age << " years old." << std::endl;
}

int main() {
    try {
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;
        
        checkAge(age);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
    
    return 0;
}
