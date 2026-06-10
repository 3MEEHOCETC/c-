#include <iostream>

//good ver
int main()
{
    std::cout << "Enter a integer: ";

    int num{ };
    std::cin >> num; 
    
    int doublenum{ num * 2};

    std::cout << "Your doubled number is:" << doublenum << std::endl;
    

    return 0;
}