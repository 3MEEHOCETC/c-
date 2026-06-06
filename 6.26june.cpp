#include <iostream>

int getNumbers()
{
    static int count = 0; // создается один раз и помнит свое значение между вызовами
    count++;

    if (count == 1) return 6;
    if (count == 2) return 8;
    
    return 0;
}

int main() {
    std::cout << getNumbers() << std::endl; // выведет 6
    std::cout << getNumbers() << std::endl; //выведет 8
    return 0;
}