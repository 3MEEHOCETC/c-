#include <iostream>

// This function has two integer parameters, one named x, and one named y
// The values of x and y passed in the by the caller
void printValues( int q, int t)
{
    std::cout << q << '\n';
    std::cout << t << '\n';
}

int main()
{
    printValues(16 ,47); // This function call has two arguments, 16 and 47

    return 0;
}