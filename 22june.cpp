#include <iostream>

int getUserValue(int val) // val is a function parameter
{
    std::cout << "Enter a value: ";
    std::cin >> val;
    return val;
}

int main() 
{
    int x {};
    int num { getUserValue(x) }; // main must pass x as an argument

    std::cout << "You entered " << num << '\n';

    return 0;
}