#include <iostream>

// reads 2 separate intgers from user
// adds them together 
// and output answer

// there are only 3 functions:
// readNumber - should be used to get (and return) a single integer gtom the user
// writeAnswer - should be used to output the answer - it takes single parameter with no return value (void?)
// main() - used to glue the above functions together
void writeAnswer();

int readNumber()
{
    std::cout << "Enter an integer: " << '\n';
    int input;
    std::cin >> input;
    return input;
}

void writeAnswer(int x)
{
    std::cout << "The sum of 2 is: "  << x << '\n';
}

int main()
{
    int x {readNumber()};
    int y {readNumber()};
    writeAnswer(x + y);
    std::cout << "The sum of 2 integers: " << x + y << '\n';

    return 0;
}