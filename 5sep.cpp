#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    bool zero { (x == 0)};
    if (zero)
    std::cout << "The value is zero\n";
    if (!zero)
    std::cout << "The value is non-zeron";

    return 0;
}