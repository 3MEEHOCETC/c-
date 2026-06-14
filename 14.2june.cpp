#include <iostream>

int return7() 
{
    return 7;
}

int return9()
{
    return 9;
}

int main()
{
    return7();
    return9();

    return 0; // даст значение ноль, так как не использовали std::cout для вывода на консоль значений
}