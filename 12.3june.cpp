#include <iostream>

float getValueFromUser()                  // this function now returns an integer value instead void
{
    std::cout << "Enter an integer: ";
    float input{};
    std::cin >> input;

    return input;                      // return the value the user entered back to the caller 
}

int main()
{
    // Ask user for input

    float num { getValueFromUser() };    // initialize num with the return value of getValueFromUser()

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}

//#include <cstdlib>
// int main() {
//return EXIT_SUCCES;
//}