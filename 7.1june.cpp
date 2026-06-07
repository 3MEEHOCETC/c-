#include <iostream>

// эта функция имеет два параметра типа int: a и b
// значения переменных a и b определяет caller
void printValues(int a, int b) 
{
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
int main()
{
    printValues(8, 9); // здесь два аргумента: 8 и 9

    return 0;
}