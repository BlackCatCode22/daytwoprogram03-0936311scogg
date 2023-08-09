// Benjamin Scoggins
// 9 Aug 2023
// input.cpp

#include <iostream>

int main()
{
    int firstNum, secondNum;

    // Prompt for and store 2 ints
    std::cout << "First number: ";
    std::cin >> firstNum;
    std::cout << "Second number: ";
    std::cin >> secondNum;

    // Caculate and display results
    std::cout << "\nThe sum of your two numbers is " << firstNum + secondNum << ".\n";
    std::cout << "The difference of your two numbers is " << firstNum - secondNum << ".\n";
    std::cout << "The product of your two numbers is " << firstNum * secondNum << ".\n";
    std::cout << "The quotient of your two numbers is " << firstNum / secondNum << " with remainder " << firstNum % secondNum << ".\n";

    return 0;
}