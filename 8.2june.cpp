#include <iostream>

void doMath(int a)
{
    int b = 5;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
    a = 4;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
}

int main()
{
    int a = 920;
    int b = 731;
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    doMath(a);
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    return 0;
}