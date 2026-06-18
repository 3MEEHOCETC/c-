#include <iostream>

// add() takes two integers as parameters, and returns the result of their sum
// The values of x and y are determined by the function that calls add()
int add(int q, int t)
{
    return q + t;
}

// main takes no parameters
int main()
{
    std::cout << add(67, 5890) << '\n'; // Arguments 67 and 5890 are passed to function add()
    return 0;
}