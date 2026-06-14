#include <iostream>

int main()
{
    std::cout << 5 ; // its ok: 5 is a literal value that we're sending to the console to be printed
    std::cout << ;  // compile error: no value provided 

    return 0;
}