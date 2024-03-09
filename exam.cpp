#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // If characters don't match, it's not a palindrome
        }
        left++;
        right--;
    }
    return true; // If all characters match, it's a palindrome
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if (isPalindrome(str)) {
        std::cout << "The string \"" << str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "The string \"" << str << "\" is not a palindrome." << std::endl;
    }

    return 0;
}