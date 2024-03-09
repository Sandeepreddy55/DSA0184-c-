#include <iostream>


class Resource {
public:
    Resource() {
        std::cout << "Resource acquired\n";
    }
    
    ~Resource() {
        std::cout << "Resource released\n";
    }
};


void useResource() {
    Resource res;
    
    bool operationSucceeded = false;
    if (!operationSucceeded) {
        throw std::runtime_error("Operation failed");
    }
}

int main() {
    try {
        useResource();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
