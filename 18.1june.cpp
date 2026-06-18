#include <iostream>

int getUserValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// This function won't compile

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num { getUserValue() };

    printDouble(num);

    return 0;
}