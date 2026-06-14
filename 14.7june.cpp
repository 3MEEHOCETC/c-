#include <iostream>

// void means the function does not to return a value to the caller 
void printHi()
{
    std::cout << "Hello m**f*cker!" << '\n';
}

int main()
{
    printHi(); // ok: function printHi() is called, no value is returned

   //  std::cout << printHi(); // compile error

    return 0;
}
