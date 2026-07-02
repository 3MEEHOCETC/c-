#include <iostream> // semantic errors

int add(int x, int y) // this function is supposed to perform addition
{
    return x - y; 
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n';

    return 0;
}