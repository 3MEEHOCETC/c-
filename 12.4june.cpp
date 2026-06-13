#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
double returnFive()
{
    // the return statement provides the value that will be returned 
    return 5.256; // return the value 5 back to the caller 
}

int main()
{
    std::cout << returnFive() << '\n';      // prints 5
    std::cout << returnFive() * 1.5 << '\n'; // prints 7

    returnFive();                        // the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}