#include <iostream>

int getNumbers()
{
    return 6;
    return 8;
}

int main()
{
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;
    
    return 0;
}