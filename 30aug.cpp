#include <iostream>

int main()
{
    bool b{}; // default initialize to false
    std::cout << "Enter a boolean value: ";
    std::cin >> b;
    std::cout << "you entered: " << b << '\n';

    return 0;
}