#include <iostream>
class Person {
public:
    virtual void work() const {
        std::cout << "Person is working\n";
    }
};
class Employee : public Person {
public:
    void work() const override {
        std::cout << "Employee is working\n";
    }
};
class Manager : public Person {
public:
    void work() const override {
        std::cout << "Manager is working\n";
    }
};

int main() {
    Employee emp;
    Manager mgr;
    emp.work();
    mgr.work();

    return 0;
}
