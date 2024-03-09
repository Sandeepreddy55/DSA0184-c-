#include <iostream>
#include <vector>
void insertElement(std::vector<int>& arr, int element, int position) {
    arr.resize(arr.size() + 1);
    for (int i = arr.size() - 1; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
}
void displayArray(const std::vector<int>& arr) {
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int element = 100;
    int position = 2; 
    insertElement(arr, element, position);
    std::cout << "Array after inserting " << element << " at position " << position << ":" << std::endl;
    displayArray(arr);
    
    return 0;
}
