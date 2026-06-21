#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{}; // x defined here
    std::cin >> x; // and used here

    std::cout << "Enter another integer: ";
    int y{}; // y defined here
    std::cin >> y; // and used here

    int sum{x + y}; // sum can be initialized with intended value
    std::cout << "The sum is: " << sum << '\n';

    return 0;
}