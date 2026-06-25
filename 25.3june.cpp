#include <iostream>

int main()
{
    #ifndef PRINT_JOSH       // this program prints "Josh" because PRINT_JOSH 
                            //was never #defined - #infdef is the opposite of #ifdef
    std::cout << "Josh\n";
    #endif

    return 0;
}