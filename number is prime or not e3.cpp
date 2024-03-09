#include <iostream>
int main()
{
int num;
std::cout << "Enter a number: ";
std::cin >> num;
if (num <= 1) {
std::cout << num << " is not a prime number." << std::endl;
return 0;
}
bool isPrime = true;
for (int i = 2; i < num; ++i) {
if (num % i == 0) {
isPrime = false; // If the number is divisible by any other number, it's not prime
break;
}
}
if (isPrime) {
std::cout << num << " is a prime number." << std::endl;
} else {
std::cout << num << " is not a prime number." << std::endl;
}
return 0;
}