#include <iostream>

//preferred ver
int main()
{
    std::cout << "Enter a integer: ";

    int num{ };
    std::cin >> num; 

    std::cout << "Your doubled number is:" << num * 2 << std::endl;
    

    return 0;
}