#include <iostream>

int main() 
{
    std::cout << "Josh\n";

    #if 0 // don't compile anything starting here
    std::cout << "Jeff\n";
    std::cout << "Bezos\n";
    #endif // until this point

    return 0;
}