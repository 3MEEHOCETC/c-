#include <iostream>

double getUserValue() //int is. only for 32 bit and 2 147 483 647
//so i changed int for long long
{
    std::cout << "Enter a integer: ";
    int x;
    std::cin >> x;
    return x;
}
int main() {
    double a = getUserValue();
    double b = getUserValue();
    std::cout << a << " / " << b << " = " << a / b << std::endl;
return 0;
}