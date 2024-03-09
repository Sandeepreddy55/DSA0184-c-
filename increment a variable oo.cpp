#include <iostream>
using namespace std;
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void operator++() {
        count++;
    }
    void operator++(int) {
        count++;
    }
    void display() {
        cout << "Count: " << count << endl;
    }
};
int main() {
    Counter c;
    ++c; 
    c.display(); 

    c++; 
    c.display(); 
    return 0;
}
