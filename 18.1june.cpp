#include <iostream>

int getUserValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// This function won't compile

void printDouble()
{
    int num{}; // i added this line
    std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
    int num { getUserValue() };

    printDouble();

    return 0;
}