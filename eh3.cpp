#include <iostream>
#include <stdexcept>

// Define a custom exception by deriving from std::exception
class MyCustomException : public std::exception {
public:
    // Constructor with a custom error message
    MyCustomException(const char* message) : msg(message) {}

    // Override the what() function to return the error message
    const char* what() const noexcept override {
        return msg.c_str();
    }

private:
    std::string msg;
};

// A function that might throw a custom exception
void processInput(int value) {
    if (value < 0) {
        throw MyCustomException("Negative input not allowed");
    }
    std::cout << "Input value: " << value << std::endl;
}

int main() {
    try {
        int input;
        std::cout << "Enter a non-negative number: ";
        std::cin >> input;

        processInput(input);
    } catch (const MyCustomException& e) {
        std::cerr << "Custom exception caught: " << e.what() << std::endl;
    }

    return 0;
}
