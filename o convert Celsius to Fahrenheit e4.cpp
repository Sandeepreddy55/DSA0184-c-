#include <iostream>
using namespace std;
int main()
{
float celsius, fahrenheit;
cout << "Enter the temperature in Celsius: ";
cin >> celsius;
fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
cout << "The temperature in Fahrenheit is: " << fahrenheit << "°F" << endl;
return 0;
}