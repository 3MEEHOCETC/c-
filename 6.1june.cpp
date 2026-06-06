#include <iostream>

int main()
{
    int boo() //функция внутри функции
    {
        std::cout << "boo!";
        return 0;
    }
    boo();
    return 0;
}