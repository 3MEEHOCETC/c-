#include <iostream>

int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}
int main()
{
    // clang-format off
    std::cerr << "main() called\n";
    // clang-format on
    std::cout << getValue() << '\n'; // added parenthesis

    return 0;
}