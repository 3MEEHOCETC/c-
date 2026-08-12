#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
    std::int8_t x { 65} ;// initialize 8-bit integral type with value 65
    std::cout << x << '\n'; // you're probably expecting this to print 65

    return 0;
}