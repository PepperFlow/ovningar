#include <string>
#include <iostream> 
#include <vector> 
#include <algorithm> 

int main() {
std::int32_t number = 0;
printf("Enter a number: ");
std::cin >> number;
if (number > 0) {
    std::cout << "The number is positive." << std::endl;
} else if (number < 0) {
    std::cout << "The number is negative." << std::endl;
} else {
    std::cout << "The number is zero." << std::endl;
    }

}