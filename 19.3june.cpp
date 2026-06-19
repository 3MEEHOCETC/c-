#include <iostream>

int doubleNumber(int q, int f)
{
    return q * 2;
}

int main()
{
std::cout << "Enter an user integer: " << '\n';
int q;
std::cin >> q;

std::cout << doubleNumber(q, 2) << '\n';

return 0;
}

// int doubleNumber(int x)
//{
// return 2 * x;
//}