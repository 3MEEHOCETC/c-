#include <iostream>

// функция add() принимает два целых числа в качестве параметров и возвращает их сумму
// Значения a и b определяет caller
int add(int a, int b)
{
    return a + b;
}

// Функция main() не имеет параметров 
int main()
{
    std::cout << add(7, 8) << std::endl; //аргументы 7 и 8 передаются в функцию add()
    return 0;
}