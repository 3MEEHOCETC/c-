#include <iostream>

int getNumbers()
{
    return 5; // второе return 7 не выведет никак
    return 7;
}

int main() 
{
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';

    return 0;
}