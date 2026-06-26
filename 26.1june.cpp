#include "max.h" /// copies #define MY_NAME from Max.h here
#include <iostream>

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces MY_NAME with "Max"

    return 0;
}