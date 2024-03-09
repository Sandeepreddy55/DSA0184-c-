#include <iostream>
#include <vector>
int countOccurrences(const std::vector<int>& arr, int value) {
    int count = 0;
    for (int element : arr) {
        if (element == value) {
            count++;
        }
    }
    return count;
}
int main() {
    std::vector<int> arr = {1, 2, 3, 4, 2, 2, 3, 4, 5};
    int valueToCount = 2;
    std::cout << "Number of occurrences of " << valueToCount << " in the array: "
              << countOccurrences(arr, valueToCount) << std::endl;

    return 0;
}
