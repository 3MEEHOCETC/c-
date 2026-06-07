#include <iostream>>

void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}

// эта функция имеет один параметр типа int: a
void printValue(int a)
{
    std::cout << a << std::endl;
}

//эта функиция имеет два параметра типа int a, b
int add(int a, int b)
{
    return a + b;
}