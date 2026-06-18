#include <iostream>

int getUserValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// This function won't compile

void printDouble(int num) // This function now has an integer parameter
{
    std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
    int num { getUserValue() };

    printDouble(num);

    return 0;
}