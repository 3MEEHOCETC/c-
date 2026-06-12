// This programm doesn't work

#include <iostream>

void getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
}

int main()
{
    getValueFromUser(); // Ask user for input

    int num{}; 

    std::cout << num << " double is: " << num * 2 << '\n';

    return 0;
}