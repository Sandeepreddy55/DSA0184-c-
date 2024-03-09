#include <iostream>
using namespace std;
class MyFunction {
public:
    void operator()(int a, int b) const {
   cout << "Function called with arguments: " << a << " and " << b << endl;
    }
};

int main() {
    MyFunction func;
    func(10, 20);

    return 0;
}
