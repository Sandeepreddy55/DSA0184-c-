#include <iostream>
#include <vector>
std::vector<int> mergeArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    for (int element : arr1) {
        mergedArray.push_back(element);
    }
    
    for (int element : arr2) {
        mergedArray.push_back(element);
    }    
   return mergedArray;
}
int main() {
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};
    std::vector<int> merged = mergeArrays(arr1, arr2);
    std::cout << "Merged array: ";
    for (int element : merged) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
