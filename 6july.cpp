#include <iostream>

int add(int f, int g)
{
    return f + g;
}

void printResult(int h)
{
    std::cout << "The answer is: " << h << '\n';
}

int maxInput()
{
    std::cout << "Enter a value: ";
    int f{};
    std::cin >> f;
    return --f;
}

int main()
{
    int f{ maxInput() };
    int g{ maxInput() };

    int h{ add(f, g) };
    printResult(h);

    return 0;
}