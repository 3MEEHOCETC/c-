#include <iostream>

int multiply(int x, int y)
{
   int product { x * y};
   return x + y;
}

int main()
{
    std::cout << multiply(4, 7) << '\n';

    return 0;
}