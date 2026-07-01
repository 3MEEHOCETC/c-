#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: " << '\n';
    int input;
    std::cin >> input;
    return input;
}


void writeAnswer(int x)
{
    std::cout << "The sum of 2 is: " << x << '\n';
}