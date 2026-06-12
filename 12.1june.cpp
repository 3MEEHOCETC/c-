#include <iostream>

int main()
{
    void foo() // illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }
    foo(); // function call to foo()

    return 0;

}