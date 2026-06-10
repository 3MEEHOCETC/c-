#include <iostream>

//triple version
int main()
{
    std::cout << "Enter a integer: ";

    int num{ };
    std::cin >> num; 

    std::cout << "Your doubled number is:" << num * 2 << std::endl;
    std::cout << "Your tripled number is: "  << num * 3 << std::endl;
    

    return 0;
}