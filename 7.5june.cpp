#include <iostream>

int multiply(int a, int b)
{
    int product = a * b;
    //return a * b;
}

int main()
{
    std::cout << multiply(5) << std::endl; // мало аргументов, были заданы параметры из 2 значений: multiply(5, 6)
    return 0;
}