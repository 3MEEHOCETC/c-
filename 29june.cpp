#include <iostream>

// Full implementation of the getUserInput function
int getUserInput()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    // Get first number from user
    int value{ getUserInput() }; // note we've included code here to test the return value!
    std::cout << value << '\n'; // debug code to ensure getUserInput() is working, we'll remove this later

    // Get mathematical operation from user
    // getMathematicalOperation();

    // Get second number from user
    // getUserInput();

    // Calculate result
    // calculateResult();

    // Print result
    // printResult();

    return 0;
}