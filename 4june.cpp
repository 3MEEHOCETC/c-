#include <iostream>
// Объявление функции doPrint
void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}
int main()
{
    std::cout << "Starting main()" << std::endl;
    doPrint(); //прерываю выполнение main() вызовом doPrint, main() - caller
    std::cout << "Ending main()" << std::endl;
    return 0;
}