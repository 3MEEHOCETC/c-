#include <iostream>

void multiply(int a, int b) //void не возвращает значение
{
    return a * b;
}

int main() {
    std::cout << multiply(7, 8) << std::endl;
    return 0;
}