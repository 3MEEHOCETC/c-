#include <iostream>

// reads 2 separate intgers from user
// adds them together 
// and output answer

// there are only 3 functions:
// readNumber - should be used to get (and return) a single integer gtom the user
// writeAnswer - should be used to output the answer - it takes single parameter with no return value (void?)
// main() - used to glue the above functions together

int readNumber()
{
    std::cout << "Enter an integer: " << '\n';
    int x;
    std::cin >> x;
    return x;


}

void writeAnswwer()
{
    std::cout << " x " << " + " << "y " << " x + y = " << '\n';
}

int main()
{
    int x;
    int readNumber(x);
    void writeAnswer();

    return 0;
}