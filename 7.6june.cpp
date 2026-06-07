#include <iostream>

int add(int a, int b, int c)
{
    return a + b + c;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::cout << multiply(add(3, 4, 5), 5) << std::endl;
    return 0;
}