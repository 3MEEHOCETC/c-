#include <iostream>

#define PRINT_JOSH

int main()
{
    #ifdef PRINT_JOE
    std::cout << "Josh\n"; // will be compiled since PRINT_JOSH is defined
    #endif

    return 0;
}