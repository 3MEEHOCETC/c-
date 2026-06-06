#include <iostream>

int return5()
{
    return 5;
}

int return8()
{
    return 8;
}

int main()
{
    std::cout << return5() + return8() << std::endl;
    return 0;
}