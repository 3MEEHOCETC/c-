#include <iostream>

#define PRINT_JOSH

int main()
{
    #ifdef PRINT_JOSH
    std::cout << "Josh\n"; // will be compiled since PRINT_JOSH is defined
    #endif

    #ifdef PRINT_JEFF
    std::cout << "Jeff\n"; // will be excluded since PRINT_JEFF is not defined
    #endif

    return 0;
}