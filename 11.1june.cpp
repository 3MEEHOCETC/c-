#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

// Definition of functioin main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint(); //doPrint called for the first time 
    doPrint(); // doPrint called for the second time
    std::cout << "Ending main()\n";
    
    return 0;
}