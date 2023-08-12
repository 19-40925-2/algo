#include <iostream>
using namespace std;

int main() {
    int number;       // Declare an integer variable named 'number'
    int *p;           // Declare an integer pointer variable named 'p'

    // Assigning the address of 'number' to the pointer 'p'
    p = &number;

    // Print the value at the memory address pointed to by 'p'
    std::cout << "Value at address " << p << " is " << *p << std::endl;

    number = 19;      // Assign the value 19 to the variable 'number'

    // Print the value at the memory address pointed to by 'p'
    std::cout << "Value at address " << p << " is " << *p << std::endl;

    *p = 25;          // Assign the value 25 to the memory location pointed to by 'p'

    // Print the value at the memory address pointed to by 'p'
    std::cout << "Value at address " << p << " is " << *p << std::endl;

    // Print the value at the memory address of 'number'
    std::cout << "Value at address " << &number << " is " << number << std::endl;

    return 0;
}
