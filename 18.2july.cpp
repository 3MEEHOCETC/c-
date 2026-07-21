#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x {};
    readNumber(); //тут почему-то считывает и принимает ноль как значение
    // купил стол и теперь могу лежа работать
    x = x + readNumber();
    writeAnswer(x);

    return 0; 
}
