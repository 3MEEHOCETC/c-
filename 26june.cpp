#include <iostream>

void foo()
{
    #define MY_NAME "Max"

}

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';
    return 0;
}