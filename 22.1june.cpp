#include <iostream>

int getUserValue()
{
    int val {}; // val is local variable
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main()
{
    int num { getUserValue() }; // main does not need to pass anything

    std::cout << "You entered " << num << '\n';

    return 0;
}