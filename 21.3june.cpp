#include <iostream>

// C style of local variables definition

int main()
{
    int x{}, y{}, sum{}; // how are the used?

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Enter another integer: ";
    std::cin >> y;
    
    sum = x + y;
    std::cout << "The sum is: " << sum << '\n';

    return 0;
}