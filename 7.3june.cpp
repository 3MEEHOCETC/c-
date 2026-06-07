#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int multiply(int c, int d)
{
    return c * d;
}

int main() {
    std::cout << add(20,33) << std::endl; // внутри функции add(): a = 20, b = 33, значит a + b = 53
    std::cout << multiply(8, 6) << std::endl; // внутри функции multiply(): c = 8, d = 6, значит c * d = 48
    
    //мы можем передавать целые выражения в качестве аргументов
    std::cout << add(4 + 9, 12 * 8) << std::endl; // внутри функции add(): a = 13, b = 96, значит a + b = 109

    //Мы можем передавать переменные в качестве аргументов
    int x = 4;
    std::cout << add(x, x) << std::endl; // будет 4 + 4

    std::cout << add(1, multiply(3, 4)) << std::endl; // будет 1 + (3 * 4)
    std::cout << add(1, add(2, 3)) << std::endl; // будет 1 + (2 + 3)

    return 0;
}