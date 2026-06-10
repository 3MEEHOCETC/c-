#include <iostream>

//worst version
int main()
{
    std::cout << "Enter a integer: ";

    int num{ };
    std::cin >> num; 
    
    num = num * 2;

    std::cout << "Your doubled number is:" << num << std::endl;
    

    return 0;
}