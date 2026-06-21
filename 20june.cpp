#include <iostream>

// x is not in scope anywhere in this function
void doSomething()
{
    std::cout << "Hello!\n";
}

int main()
{
    // x can not used here beacuse it's not in the scope yet

    int x{0}; // x enters scope here and can now be used within this function 

    doSomething(); 

    return 0;
} // x goes out of scope here and can no longer be used