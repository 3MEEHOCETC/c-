#include <iostream>

int main()
{
    bool bFalse { 0 }; // okay: initialized to false
    bool bTrue { 1}; // okay: initialized to true
    bool bNo {2 }; // error: narrowing conversions disallowed

    std::cout << bFalse << bTrue << bNo << '\n';

    return 0;
}