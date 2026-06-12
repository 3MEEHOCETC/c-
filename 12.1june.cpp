#include <iostream>
void foo() // illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }

int main()
{ 
    foo(); // function call to foo()

    return 0;
}