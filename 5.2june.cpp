#include <iostream>

int getUserValue()
{
    std::cout << "Enter a integer: ";
    int x;
    std::cin >> x;
    return x;
}
int main() {
    int a = getUserValue();
    int b = getUserValue();
    std::cout << a << " * " << b << " = " << a * b << std::endl;
return 0;
}