#include <iostream>

int getUserValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value of input back to the caller
}

int main() 
{
    std::cout << getUserValue() << '\n'; // where does the returned value get stored?

    return 0;
}