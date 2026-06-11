#include <iostream>

int main() 
{
    std::cout << "Enter an integer: "<< std::endl;
    int x;
    std::cin >> x;
    std::cout << "Enter an another integer: " << std::endl;
    int y;
    std::cin >> y;  
    std::cout << "x + y = " << (x + y) << std::endl;
    //std::cout << x << " + " << y << " is " << x + y << "\.n"; 
    std::cout << "x - y = " << (x - y) << std::endl;
    //std::cout << x << " - " << y << " is " << x - y << "\.n";
    return 0;
}